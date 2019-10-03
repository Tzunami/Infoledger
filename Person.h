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
#include "PCRM_Error.h"

#define People List<Person>

namespace PCRM {

/***************************************/
class Person: public ID {
public:
	Data *data;
	// constructor
    Person(std::string n);
    Person(std::string n, Data* d);
    virtual ~Person() {}
	//operators
	People &operator+(Person &p) const;
    bool operator==(Person &p) const;
	void Print();
};
/*********************************************/
} /* namespace  */
#endif /* PERSON_H_ */
