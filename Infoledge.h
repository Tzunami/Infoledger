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
#include "Department.h"

namespace EW {
typedef Data* (*Process)(Person &p, Department &g);
/**********************************************************/
class Infoledge {
public:
	//members
	Person *person;
	Department *department;
	Data data;
	Process process; //Type E
	//constructors
	Infoledge();
	Infoledge(Infoledge *i);
	Infoledge(Person &p, Department &g);
	Infoledge(Person &p, Department &g, Process e);
	//functions
	void Print();
	Data* RunProcess() {return (process)(*person, *department);}
	Data* RunProcess(Process pr) {return (*pr)(*person, *department);}
//private:
	//Infoledge * next;
	Infoledge * previous;
};
/**********************************************************/
} /* namespace EW */
#endif /* INFOLEDGE_H_ */
