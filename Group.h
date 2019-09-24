/*
 * Group.h
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef GROUP_H_
#define GROUP_H_

#include "People.h"
#include "Person.h"

namespace EW {
/*************************************************************************************/
class Group: public ID, public People {
public:
	//members
	Data data;
	//constructors
    Group();
    Group(Group *g);
    Group(People *pl);
    Group(People &pl);
    Group(Person &p1, Person &p2);
    Group(Person &p1, Person &p2, std::string n);
    virtual ~Group();
	//functions
	void Print() {People::Print();}
	//operators Person
    Group &operator+(Person &p) {
		People *pl=&People::operator+(p);
        Group *mygroup=new Group(pl);
		return *mygroup; }
    Group &operator-(Person &p) {People *pl=&People::operator-(p); Group *mygroup=new Group(pl); return *mygroup; }
    Group &operator+=(Person &p){People::operator+=(p); return *this;}
    Group &operator-=(Person &p){People::operator-=(p); return *this;}
	//operators People Equal
    Group &operator=(People &p) {People::operator=(p); return *this;}
    Group &operator=(People *p) {People::operator=(p); return *this;}
	//operators People
    Group &operator+(People &p) {People *pl=&People::operator+(p); Group* mygroup=new Group(pl); return *mygroup;}
    Group &operator-(People &p) {People *pl=&People::operator-(p); Group* mygroup=new Group(pl); return *mygroup;}
    Group &operator+=(People &p){People::operator+=(p); return *this;}
    Group &operator+=(People *p){People::operator+=(p); return *this;}
    Group &operator-=(People &p){People::operator-=(p); return *this;}
    Group &operator-=(People *p){People::operator-=(p); return *this;}
    //operators Group
    Group &operator=(Group &g){People::List<Person>::operator=(g); return *this;}
    Group &operator=(Group *g){People::List<Person>::operator=(g); return *this;}
    Group &operator+(Group &p) {People *pl=&People::operator+(p); Group* mygroup=new Group(pl); return *mygroup;}
    Group &operator-(Group &p) {People *pl=&People::operator-(p); Group* mygroup=new Group(pl); return *mygroup;}
    Group &operator+=(Group &p){People::operator+=(p); return *this;}
    Group &operator+=(Group *p){People::operator+=(p); return *this;}
    Group &operator-=(Group &p){People::operator-=(p); return *this;}
    Group &operator-=(Group *p){People::operator-=(p); return *this;}

};
/*************************************************************************************/
} /* namespace EW */
#endif /* Group_H_ */
