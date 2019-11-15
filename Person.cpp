/*
 * Person.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */

#include "Person.h"

namespace Infoledger {
/********************************************************/
Person::Person(std::string n): ID(n) {
    //std::cout<<"Person Constructor, Name: "<<name<<std::endl;
}
/********************************************************/
Person::Person(std::string n, List<Data> d): ID(n), data(d) {
    //std::cout<<"Person Constructor"<<std::endl;
}
/********************************************************/
bool Person::operator==(Person &p) const {
    if(this->GetName() != p.GetName()) return false;
    if(this->GetID()   != p.GetID())   return false;
    if(this->data.list != p.data.list) return false;
    return true;
}
/********************************************************/
People &Person::operator+(Person &p) {
    People* people = new People(*this);
    if(*this == p) return *people;
    people->list.push_back(&p);
    return *people;
}
/********************************************************/
Person &Person::operator*(Person &p) {
    Person* person = new Person(*this);
    if(*this == p) return *person;
    person->data+= p.data;
    return *person;
}
/********************************************************/
Person &Person::operator/(Person &p) {
    Person* person = new Person(*this);
    if(*this == p) return *person;
    person->data /= p.data;
    return *person;
}
/********************************************************/
void Person::Print() {
    std::cout<<"Name: " << GetName() << " ID: " << GetID() << " Data: ";
    for(auto& print : data.list) {
        print->Print();
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
/********************************************************/
} /* namespace Infoledger */
/********************************************************/
