/*
 * Department.h
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef DEPARTMENT_H_
#define DEPARTMENT_H_

#include "People.h"
#include "Person.h"

namespace EW {
/*************************************************************************************/
class Department: public ID, public People {
public:
	//members
	Data data;
	//constructors
	Department();
	Department(Department *g);
	Department(People *pl);
	Department(People &pl);
	Department(Person &p1, Person &p2);
	Department(Person &p1, Person &p2, std::string n);
	virtual ~Department();
	//functions
	void Print() {People::Print();}
	//operators Person
	Department &operator+(Person &p) {
		People *pl=&People::operator+(p);
		Department *mygroup=new Department(pl);
		return *mygroup; }
	Department &operator-(Person &p) {People *pl=&People::operator-(p); Department *mygroup=new Department(pl); return *mygroup; }
	Department &operator+=(Person &p){People::operator+=(p); return *this;}
	Department &operator-=(Person &p){People::operator-=(p); return *this;}
	//operators People Equal
	Department &operator=(People &p) {People::operator=(p); return *this;}
	Department &operator=(People *p) {People::operator=(p); return *this;}
	//operators People
	Department &operator+(People &p) {People *pl=&People::operator+(p); Department* mygroup=new Department(pl); return *mygroup;}
	Department &operator-(People &p) {People *pl=&People::operator-(p); Department* mygroup=new Department(pl); return *mygroup;}
	Department &operator+=(People &p){People::operator+=(p); return *this;}
	Department &operator+=(People *p){People::operator+=(p); return *this;}
	Department &operator-=(People &p){People::operator-=(p); return *this;}
	Department &operator-=(People *p){People::operator-=(p); return *this;}
	//operators Department
	Department &operator=(Department &g){People::List<Person>::operator=(g); return *this;}
	Department &operator=(Department *g){People::List<Person>::operator=(g); return *this;}
	Department &operator+(Department &p) {People *pl=&People::operator+(p); Department* mygroup=new Department(pl); return *mygroup;}
	Department &operator-(Department &p) {People *pl=&People::operator-(p); Department* mygroup=new Department(pl); return *mygroup;}
	Department &operator+=(Department &p){People::operator+=(p); return *this;}
	Department &operator+=(Department *p){People::operator+=(p); return *this;}
	Department &operator-=(Department &p){People::operator-=(p); return *this;}
	Department &operator-=(Department *p){People::operator-=(p); return *this;}

};
/*************************************************************************************/
} /* namespace EW */
#endif /* DEPARTMENT_H_ */
