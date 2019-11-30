/*
 * Person.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */

#include "Person.h"

namespace Infoledger {
/********************************************************/
Person::Person(std::string name): ID(name) {
    //std::cout<<"Person Constructor, Name: "<<name<<std::endl;
}
/********************************************************/
Person::Person(std::string name, List<Data> d): ID(name), data(d) {
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
Person &Person::operator=(Person &p) {
    if(this == &p) return *this;
    this->data.list = p.data.list;
    return *this;
}
/********************************************************/
Person &Person::operator*(Person &p) {
    const std::string name = "_"+ this->GetName() + p.GetName();
    Person* person = new Person(name, this->data);
    if(*this == p) return *person;
    person->data+= p.data;
    return *person;
}
/********************************************************/
People &Person::operator/(Person &p) {
    People* people = new People;
    if(*this == p) return *people;
    const std::string d_name = "D_" + GetName() + " " + p.GetName();
    const std::string r_name = "R_" + p.GetName();
    Person* d_person = new Person(d_name);
    Person* r_person = new Person(r_name);
    DblData dd;
    for(auto& this_data : this->data.list) {
        for(auto& p_data : p.data.list) {
            dd = this_data->operator/(*p_data);
            d_person->data.list.push_back(dd.denominator);
            r_person->data.list.push_back(dd.remainder);
        }
    }
    d_person->Clean();
    r_person->Clean();
    *people = *d_person + *r_person;
    return *people;
}
/********************************************************/
void Person::Print() {
    std::cout<<"Name: " << GetName() << " ID: " << GetID() << " Data: ";
    for(auto& print : data.list) print->Print();
    std::cout << std::endl;
}
/*************************************************/
void Person::Clean() {
    const unsigned long size = this->data.list.size();
    for(unsigned long elm=0; elm<size; elm++) {
        if(this->data.list[elm]->type == DataType::ERROR) {
            this->data.list.erase(this->data.list.begin() + static_cast<long>(elm--));
        }
    }
}
/********************************************************/
} /* namespace Infoledger */
/********************************************************/
