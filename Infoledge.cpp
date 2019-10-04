/*
 * Infoledge.cpp
 *
 *  Created on: Nov 22, 2015
 *      Author: tzunami
 */

#include "Infoledge.h"

namespace IL {

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

	try{
       if(p.data==nullptr||g.GetName()=="") throw IL_Error("Infoledge Constructor Failed");
    }
    catch(IL_Error &e) { e.PrintError(); }
    //next = nullptr;
    //previous = nullptr;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
void Infoledge::Print() {
	std::cout<<"Person:"<<std::endl;
	person->Print();
	std::cout<<"Group:"<<std::endl;
    group->Print();
    std::cout<<"Result: ";

    if(result == nullptr) return;
    if(result->type != DATA_TYPE_INFORMATION) {
        Information* i = reinterpret_cast<Information*>(result);
        i->Print();
    }
    if(result->type != DATA_TYPE_KNOWLEDGE) {
        Knowledge* k = reinterpret_cast<Knowledge*>(result);
        k->Print();
    }

    /*if(previous!=nullptr) {
		std::cout<<"------------ Previous:"<<std::endl;
		previous->Print();
    }*/
}
/*************************************************/
} // namespace
