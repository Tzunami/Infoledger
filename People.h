/*
 * People.h
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_

#include "Person.h"
#include "List.h"

namespace EW {
class Person;
/****************************************************************/
class People: public List<Person> {
public:
	People();
	People(List<Person> *lp);
	People(People *pl);
	virtual ~People();
	//operators Person
	People &operator+(Person &p) {List<Person> *lp=&List<Person>::operator+(p); People* people=new People(lp); return *people;}
	People &operator-(Person &p) {List<Person> *lp=&List<Person>::operator-(p); People* people=new People(lp); return *people;}
	People &operator+=(Person &p){List<Person>::operator+=(p); return *this;}
	People &operator-=(Person &p){List<Person>::operator-=(p); return *this;}
	//operators People Equal
	People &operator=(People &p) {List<Person>::operator=(p); return *this;}
	People &operator=(People *p) {List<Person>::operator=(p); return *this;}
	//operators People
	People &operator+(People &p) {List<Person> *lp=&List<Person>::operator+(p); People* people=new People(lp); return *people;}
	People &operator-(People &p) {List<Person> *lp=&List<Person>::operator-(p); People* people=new People(lp); return *people;}
	People &operator+=(People &p){List<Person>::operator+=(p); return *this;}
	People &operator+=(People *p){List<Person>::operator+=(p); return *this;}
	People &operator-=(People &p){List<Person>::operator-=(p); return *this;}
	People &operator-=(People *p){List<Person>::operator-=(p); return *this;}
};
/****************************************************************/
} /* namespace EW */
#endif /* PEOPLE_H_ */
