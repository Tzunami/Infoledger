/*
 * Person.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef PERSON_H_
#define PERSON_H_


#include "ID.h"
#include "Data.h"
#include "List.h"
#include "IL_Error.h"

#define People List<Person>

namespace Infoledger {

/***************************************/
class Person: public ID {
public:
    List<Data> data;
	// constructor
    Person(std::string n);
    Person(std::string n, Data* d);
    virtual ~Person() {}
	//operators
    bool operator==(Person &p) const;
    People &operator+(Person &p) ;
	void Print();
};
/*********************************************/
} /* namespace  */
#endif /* PERSON_H_ */
