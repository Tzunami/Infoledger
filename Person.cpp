/*
 * Person.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */

#include "Person.h"

namespace PCRM {
/********************************************************/
Person::Person(std::string n): ID(n), data(nullptr) {
    //std::cout<<"Person Constructor, Name: "<<name<<std::endl;
}
/********************************************************/
Person::Person(std::string n, Data* d): ID(n), data(d) {
    //std::cout<<"Person Constructor"<<std::endl;
}
/********************************************************/
People &Person::operator+(Person &p) const {
    if(*this==*&p) return *this;
    People* people = new People(*this);
	people->list.push_back(p);
	return *people;
}
/********************************************************/
bool Person::operator==(Person &p) const {
    if(this->GetName() != p.GetName()) return false;
    if(this->GetID()   != p.GetID())   return false;
    //if(this->data != p.data) return false;
    return true;
}
/********************************************************/
void Person::Print() {
    std::cout<<"Name: " << GetName() << " ID: " << GetID() << " Data: ";
    if(data!=nullptr) data->Print();
    std::cout << std::endl;
}
/********************************************************/
} /* namespace PCRM_Person */
/********************************************************/
