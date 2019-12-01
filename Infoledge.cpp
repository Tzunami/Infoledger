/*
 * Infoledge.cpp
 *
 *  Created on: Nov 22, 2015
 *      Author: tzunami
 */

#include "Infoledge.h"

namespace Infoledger {
/*************************************************/
Infoledge::Infoledge():
    person(nullptr), group(nullptr), result(nullptr), process(nullptr) {
    //next = nullptr;
    //previous = nullptr;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Infoledge *i) {
	*this = i;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Person &p, Group &g):
    person(&p), group(&g), result(nullptr), process(nullptr) {

    try{
        if(p.GetName()=="") throw IL_Error("Infoledge Constructor Failed");
    }
    catch(IL_Error &e) {e.PrintError();}
    //next = nullptr;
    //previous = nullptr;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Person &p, Group &g, Process e):
    person(&p), group(&g), result(nullptr), process(e) {
    //next = nullptr;
    //previous = nullptr;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::~Infoledge() {
    delete person;
    delete group;
    delete result;
}
/*************************************************/
void Infoledge::Print() {
	std::cout<<"Person:"<<std::endl;
	person->Print();
	std::cout<<"Group:"<<std::endl;
    group->Print();
    std::cout<<"Result: ";

    if(result == nullptr) return;
    switch(result->type) {
        case DataType::ERROR: { throw; }
        case DataType::KNOWLEDGE: {
            Knowledge* i = reinterpret_cast<Knowledge*>(result);
            i->Print();
            break;
            }
        case DataType::INFORMATION: {
            Information* i = reinterpret_cast<Information*>(result);
            i->Print();
            break;
            } // end case
        } // end switch

    /*if(previous!=nullptr) {
		std::cout<<"------------ Previous:"<<std::endl;
		previous->Print();
    }*/
}
/*************************************************/
} // namespace
