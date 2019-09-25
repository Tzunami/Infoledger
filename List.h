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
	//Constructors
	virtual ~List<T>(){}
	List<T>(){}
	List<T>(List<T> *p){*this=*p;}
	//operators T
	List<T> &operator+(T &p);
	List<T> &operator-(T &p);
	List<T> &operator+=(T &p);
	List<T> &operator-=(T &p);
	//operators List<T>
	List<T> &operator=(List<T> *p);
	List<T> &operator=(List<T> &p);
	List<T> &operator+(List<T> &p);
	List<T> &operator-(List<T> &p);
	//List<T> &operator+(List<T> *p);
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
template <class T>
List<T> &List<T>::operator=(List<T> *p) {
	*this = *p;
	delete p;
	return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator=(List<T> &p) {
	list = p.list;
	return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+(T &p) {
	List<T>* pl = new List<T>();
	*pl = *this;
	pl->list.push_back(p);
	return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+(List<T> &p) {
	List<T>* pl = new List<T>();
	*pl = *this;
    // need to check for duplicates // BUG
	pl->list.insert(pl->list.end(),p.list.begin(),p.list.end());
	return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-(T &p) {
	unsigned int found = Find(p);
	List<T>* pl = new List<T>();
	*pl = *this;
	if(found--) pl->list.erase(pl->list.begin()+ found);
	return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-(List<T> &p) {
	List<T>* pl = new List<T>();
	*pl = *this;

	for(unsigned int found, j=0; j<pl->list.size(); j++) {
		found = p.Find(pl->list[j]);
		if(found--)pl->list.erase(pl->list.begin()+ j);
	}//end for
	return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T> *p) {
    // need to check for duplicates // BUG
	list.insert(list.end(),p->list.begin(),p->list.end());
	delete p;
	return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T> &p) {
	list.insert(list.end(),p.list.begin(),p.list.end());
	return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(T &p) {
	list.push_back(p);
	return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(List<T> *p) {
	for(unsigned int i=0, found; i<p->list.size(); i++){
		found = Find(p->list[i]);
		if(found--)	{
			list.erase(list.begin() + found);
		}
	}
	return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(List<T> &p) {
	for(unsigned int i=0, found; i<p.list.size(); i++){
		found = Find(p.list[i]);
		if(found--)	list.erase(list.begin() + found);
	}
	return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(T &p) {
	unsigned int found = Find(p);
	if(found--)	list.erase(list.begin() + found);
	return *this;
}
/********************************************/
template <class T>
unsigned int List<T>::Find(T &p) {
	for(unsigned int i=0; i<list.size(); i++)
		if(list[i].name==p.name && list[i].id==p.id)
			return ++i;
	return 0;
}
/**************************************************/
template <class T>
void List<T>::Print() {
	for(unsigned int i=0; i<list.size(); i++) {
		list[i].T::Print();
	}//end for
}
/****************************************************************/
} /* namespace PCRM */
#endif /* LIST_H_ */
