/*
 * Infoledge.cpp
 *
 *  Created on: Nov 22, 2015
 *      Author: tzunami
 */

#include "Infoledge.h"
#include "Data.h"
#include "PCRM_Error.h"

namespace PCRM {

Infoledge::Infoledge() {
    person = nullptr;
    group = nullptr;
    process = nullptr;
    //next = nullptr;
    previous = nullptr;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Infoledge *i) {
	*this = i;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Person &p, Group &g) {
	try{
<<<<<<< HEAD
			if(&p==0||&g==0) throw PCRM_Error("Infoledge Constructor Failed");
=======
            if(p.data==nullptr||g.name=="") throw PCRM_Error("Infoledge Constructor Failed");
>>>>>>> master
		}
	catch(PCRM_Error &e) {e.PrintError();}

	person = &p;
    group = &g;
    process = nullptr;
    //next = nullptr;
    previous = nullptr;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Person &p, Group &g, Process e) {
	try{
<<<<<<< HEAD
			if(&p==0||&g==0) throw PCRM_Error("Infoledge Constructor Failed");
=======
            if(p.data==nullptr||g.name=="") throw PCRM_Error("Infoledge Constructor Failed");
>>>>>>> master
		}
	catch(PCRM_Error &e) {e.PrintError();}

	person = &p;
    group = &g;
	process = e;
    //next = nullptr;
    previous = nullptr;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
void Infoledge::Print() {
	std::cout<<"Person:"<<std::endl;
	person->Print();
	std::cout<<"Group:"<<std::endl;
    group->Print();
	data.Print();
    if(previous!=nullptr) {
		std::cout<<"------------ Previous:"<<std::endl;
		previous->Print();
	}
}
/*************************************************/
} // namespace
