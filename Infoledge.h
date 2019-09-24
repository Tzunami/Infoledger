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

namespace PCRM {
<<<<<<< HEAD
typedef Data* (*Process)(Person &p, Department &g);
=======
typedef Data* (*Process)(Person &p, Group &g);
>>>>>>> master
/**********************************************************/
class Infoledge {
public:
	//members
	Person *person;
    Group *group;
	Data data;
	Process process; //Type E
	//constructors
	Infoledge();
	Infoledge(Infoledge *i);
    Infoledge(Person &p, Group &g);
    Infoledge(Person &p, Group &g, Process e);
	//functions
	void Print();
    Data* RunProcess() {return (process)(*person, *group);}
    Data* RunProcess(Process pr) {return (*pr)(*person, *group);}
//private:
	//Infoledge * next;
	Infoledge * previous;
};
/**********************************************************/
} /* namespace PCRM */
#endif /* INFOLEDGE_H_ */
