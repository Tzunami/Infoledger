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
#include "People.h"

namespace EW {
class People;
/***************************************/
class Person: public ID {
public:
	Data *data;
	// constructor
	Person();
	Person(std::string n);
	virtual ~Person();
	//operators
	People &operator+(Person &p) const;
	void Print();
};
/*********************************************/
} /* namespace  */
#endif /* PERSON_H_ */
