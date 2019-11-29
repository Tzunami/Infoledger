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
    // constructor
    Person(std::string name);
    Person(std::string name, List<Data> d);
    //virtual ~Person() {}
    //operators
    bool operator==(Person &p) const;
    Person &operator=(Person &p);
    People &operator+(Person &p);
    Person &operator*(Person &p);
    People &operator/(Person &p);

    List<Data> data;
    void Print();

protected:
    void Clean(); // remove DataType==ERROR
};
/*********************************************/
} /* namespace  */
#endif /* PERSON_H_ */
