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

namespace Infoledger {
/****************************************************************/
template <class T> //Base Class is ID
class List {
public:
	//members
    std::vector<T*> list;

    // Con/De-structors
    List<T>();
    List<T>(T& t);
    virtual ~List<T>(){}

    //operators T
    List<T> &operator+(T& p);
    List<T> &operator-(T& p);
    List<T> &operator+=(T& p);
    List<T> &operator-=(T& p);

    //operators List<T>
    List<T> &operator=(List<T>* p);
    List<T> &operator=(List<T>& p);

    //List<T> &operator+(List<T> *p);
    List<T> &operator+(List<T>& p);
    List<T> &operator-(List<T>& p);

    //List<T> &operator-(List<T> *p);
    List<T> &operator+=(List<T>* p);
    List<T> &operator+=(List<T>& p);
    List<T> &operator-=(List<T>* p);
    List<T> &operator-=(List<T>& p);

    //function
	void Print();

protected:
    unsigned int GetDuplicate(T &p) const;
    void RemoveDuplicate(const T &p);
    void RemoveDuplicate(List<T> &p);
};

/******************************** cpp ********************************/
template<class T>
List<T>::List() {}
/********************************************/
template<class T>
List<T>::List(T& t) { list.push_back(&t); }
//operators T
/********************************************/
template <class T>
List<T> &List<T>::operator+(T& p) {
    unsigned int duplicate = GetDuplicate(p);
    List<T>* pl = new List<T>();
    *pl = *this;
    if(duplicate) return *pl;
    pl->list.push_back(&p);
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-(T& p) {
    unsigned int remove = GetDuplicate(p);
    List<T>* pl = new List<T>();
    *pl = *this;
    if(remove--) pl->list.erase(pl->list.begin() + remove);
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(T& p) {
    unsigned int duplicate = GetDuplicate(p);
    if(duplicate) return *this;
    list.push_back(&p);
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(T& p) {
    unsigned int remove = GetDuplicate(p);
    if(remove--) list.erase(list.begin() + remove);
    return *this;
}
//operators List<T>
/********************************************/
template <class T>
List<T> &List<T>::operator=(List<T>* p) {
    delete this;
    *this = *p;
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator=(List<T>& p) {
    list = p.list;
    return *this;
}

/********************************************/
template <class T>
List<T> &List<T>::operator+(List<T>& p) {
    List<T>* pl = new List<T>();
    *pl = *this;
    pl->RemoveDuplicate(p);
    pl->list.insert(pl->list.end(), p.list.begin(), p.list.end());
    return *pl;
}

/********************************************/
template <class T>
List<T> &List<T>::operator-(List<T>& p) {
    List<T>* pl = new List<T>();
    *pl = *this;
    pl->RemoveDuplicate(p);
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T>* p) {
    RemoveDuplicate(*p);
    this->list.insert(this->list.end(), p->list.begin(), p->list.end());
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T>& p) {
    RemoveDuplicate(p);
    list.insert(list.end(), p.list.begin(), p.list.end());
    return *this;
}

/********************************************/
template <class T>
List<T> &List<T>::operator-=(List<T>* p) {
    RemoveDuplicate(*p);
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(List<T>& p) {
    RemoveDuplicate(p);
    return *this;
}
/********************************************/
template <class T>
unsigned int List<T>::GetDuplicate(T& p) const {
    for(unsigned int i=0; i<this->list.size(); i++)
        if(list[i]==&p)
            return ++i;
    return 0;
}
/********************************************/
template <class T>
void List<T>::RemoveDuplicate(List<T>& p) {
    for(unsigned int x=0; x<this->list.size(); x++)
        for(unsigned int y=0; y<p.list.size(); y++)
            if(this->list[x] == p.list[y]) {
                this->list.erase(this->list.begin() + x);
                if(x>=this->list.size()) return;
            }
}
/**************************************************/
template <class T>
void List<T>::Print() {
    for(unsigned int i=0; i<list.size(); i++) {
        list[i]->Print();
    }//end for
}

/****************************************************************/
} /* namespace Infoledger */
#endif /* LIST_H_ */
