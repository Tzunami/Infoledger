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
#include <iostream> //delete

namespace PCRM {
/****************************************************************/
template <class T> //Base Class is ID
class List {
public:
	//members
	std::vector<T> list;

    // Con/De-structors
    List<T>();
    List<T>(T t);
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
    unsigned int Remove(T &p);
    unsigned int Remove(T *p);
    //unsigned int Remove(List<T> &p);
    //unsigned int Remove(List<T> *p);
    void RemoveDuplicate(T &p);
    void RemoveDuplicate(List<T> &p);
    void RemoveDuplicate(List<T> *p);

};

/******************************** cpp ********************************/
template<class T>
List<T>::List() {}
/********************************************/
template<class T>
List<T>::List(T t) { list.push_back(t); }
//operators T
/********************************************/
template <class T>
List<T> &List<T>::operator+(T &p) {
    List<T>* pl = new List<T>();
    *pl = *this;
    RemoveDuplicate(p);
    pl->list.push_back(p);
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-(T &p) {
    unsigned int remove = Remove(p);
    List<T>* pl = new List<T>();
    *pl = *this;
    if(remove--) pl->list.erase(pl->list.begin() + remove);
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(T &p) {
    RemoveDuplicate(p);
    list.push_back(p);
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(T &p) {
    unsigned int remove = Remove(p);
    if(remove--)	list.erase(list.begin() + remove);
    return *this;
}
//operators List<T>
/********************************************/
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
List<T> &List<T>::operator+(List<T> &p) {
    List<T>* pl = new List<T>();
    *pl = *this;
    RemoveDuplicate(p);
    pl->list.insert(pl->list.end(), p.list.begin(), p.list.end());
    return *pl;
}

/********************************************/
template <class T>
List<T> &List<T>::operator-(List<T> &p) {
    unsigned int remove = Remove(p);
    List<T>* pl = new List<T>();
    *pl = *this;
    if(remove--) pl->list.erase(pl->list.begin() + remove);
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T> *p) {
    RemoveDuplicate(p);
    this->list.insert(this->list.end(), p->list.begin(), p->list.end());
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T> &p) {
    RemoveDuplicate(p);
    list.insert(list.end(), p.list.begin(), p.list.end());
    return *this;
}

/********************************************/
template <class T>
List<T> &List<T>::operator-=(List<T> *p) {
    unsigned int remove = Remove(p);
    if(remove--)	list.erase(list.begin() + remove);
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(List<T> &p) {
    unsigned int remove = Remove(p);
    if(remove--)	list.erase(list.begin() + remove);
    return *this;
}
/********************************************/
template <class T>
unsigned int List<T>::Remove(T &p) {
    for(unsigned int i=0; i<list.size(); i++)
        if(list[i].name==p.name && list[i].id==p.id)
            return ++i;
    return 0;
}
/********************************************/
template <class T>
unsigned int List<T>::Remove(T *p) {
    for(unsigned int i=0; i<list.size(); i++)
        if(list[i].name==p->name && list[i]->id==p->id) // WRONG !!!!!
            return ++i;
    return 0;
}
/********************************************/
template <class T>
void List<T>::Remove(List<T> &p) {
    for(unsigned int j=0; j<this->list.size(); j++)
        Remove(p.list[j]);
}
/********************************************/
template <class T>
void List<T>::Remove(List<T> *p) {
    for(unsigned int j=0; j<this->list.size(); j++)
        Remove(p->list[j]);
}
/********************************************/
template <class T>
void List<T>::RemoveDuplicate(T& p) {
    for(unsigned int remove, j=0; j<this->list.size(); j++) {
        remove = Remove(p);
        if(remove--) {
            this->list.erase(this->list.begin()+ j);
        }
    }//end for
}
/********************************************/
template <class T>
void List<T>::RemoveDuplicate(List<T> &p) {
    for(unsigned int j=0; j<this->list.size(); j++)
        RemoveDuplicate(p.list[j]);
}
/********************************************/
template <class T>
void List<T>::RemoveDuplicate(List<T> *p) {
    for(unsigned int j=0; j<this->list.size(); j++)
        RemoveDuplicate(p->list[j]);
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
