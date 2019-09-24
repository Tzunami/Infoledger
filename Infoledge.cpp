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
	person = 0;
	department = 0;
	process = 0;
	//next = 0;
	previous = 0;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Infoledge *i) {
	*this = i;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Person &p, Department &g) {
	try{
			if(&p==0||&g==0) throw PCRM_Error("Infoledge Constructor Failed");
		}
	catch(PCRM_Error &e) {e.PrintError();}

	person = &p;
	department = &g;
	process = 0;
	//next = 0;
	previous = 0;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Person &p, Department &g, Process e) {
	try{
			if(&p==0||&g==0) throw PCRM_Error("Infoledge Constructor Failed");
		}
	catch(PCRM_Error &e) {e.PrintError();}

	person = &p;
	department = &g;
	process = e;
	//next = 0;
	previous = 0;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
void Infoledge::Print() {
	std::cout<<"Person:"<<std::endl;
	person->Print();
	std::cout<<"Group:"<<std::endl;
	department->Print();
	data.Print();
	if(previous!=0) {
		std::cout<<"------------ Previous:"<<std::endl;
		previous->Print();
	}
}
/*************************************************/
} // namespace
