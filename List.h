/*
 *  List.h
 *
 *  Created on: Nov 25, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef LIST_H_
#define LIST_H_

#include <vector>
#include "ID.h"

#include <iostream> //delete

namespace PCRM {
/****************************************************************/
template <class T> //Base Class is ID
class List {
public:
	//members
	std::vector<T> list;

    // Con/De-structors
    List<T>(){}
	virtual ~List<T>(){}

    //operators T
	List<T> &operator+(T &p);
	List<T> &operator-(T &p);
	List<T> &operator+=(T &p);
    List<T> &operator-=(T &p);

    //operators List<T>
	List<T> &operator=(List<T> *p);
	List<T> &operator=(List<T> &p);

    //List<T> &operator+(List<T> *p);
	List<T> &operator+(List<T> &p);
	List<T> &operator-(List<T> &p);	

    //List<T> &operator-(List<T> *p);
	List<T> &operator+=(List<T> *p);
	List<T> &operator+=(List<T> &p);
	List<T> &operator-=(List<T> *p);
	List<T> &operator-=(List<T> &p);

    //function
	void Print();

protected:
	unsigned int Find(T &p);
};

/****************************************************************/
} /* namespace PCRM */
#endif /* LIST_H_ */
