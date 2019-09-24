/*
 * Infoledge.cpp
 *
 *  Created on: Nov 22, 2015
 *      Author: tzunami
 */

#include "Infoledge.h"
#include "Data.h"
#include "EW_Error.h"

namespace EW {

Infoledge::Infoledge() {
	person = 0;
    group = 0;
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
Infoledge::Infoledge(Person &p, Group &g) {
	try{
			if(&p==0||&g==0) throw EW_Error("Infoledge Constructor Failed");
		}
	catch(EW_Error &e) {e.PrintError();}

	person = &p;
    group = &g;
	process = 0;
	//next = 0;
	previous = 0;
	//std::cout<<"Infoledge Constructor"<<std::endl;
}
/*************************************************/
Infoledge::Infoledge(Person &p, Group &g, Process e) {
	try{
			if(&p==0||&g==0) throw EW_Error("Infoledge Constructor Failed");
		}
	catch(EW_Error &e) {e.PrintError();}

	person = &p;
    group = &g;
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
    group->Print();
	data.Print();
	if(previous!=0) {
		std::cout<<"------------ Previous:"<<std::endl;
		previous->Print();
	}
}
/*************************************************/
} // namespace
