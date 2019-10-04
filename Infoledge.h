/*
 * Infoledge.h
 *
 *  Created on: Nov 22, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef INFOLEDGE_H_
#define INFOLEDGE_H_

#include "Person.h"
#include "Data.h"
#include "Group.h"
#include "PCRM_Error.h"
#include "Knowledge.h"
#include "Information.h"

namespace PCRM {
class Infoledge;
typedef void (*Process)(Infoledge &il, Person &p, Group &g);
/**********************************************************/
class Infoledge {    
public:
	//members
    Person* person;
    Group* group;
    Data* result;
	Process process; //Type E
	//constructors
	Infoledge();
	Infoledge(Infoledge *i);
    Infoledge(Person &p, Group &g);
    Infoledge(Person &p, Group &g, Process e);
	//functions
	void Print();
    void RunProcess() {return (process)(*this, *person, *group);}
    void RunProcess(Process pr) {return (*pr)(*this, *person, *group);}
//private:
	//Infoledge * next;
    //Infoledge * previous;
};
/**********************************************************/
} /* namespace PCRM */
#endif /* INFOLEDGE_H_ */
