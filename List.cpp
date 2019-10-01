/*
 * List.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */

#include "List.h"

namespace PCRM {
//operators T
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
List<T> &List<T>::operator-(T &p) {
    unsigned int found = Find(p);
    List<T>* pl = new List<T>();
    *pl = *this;
    if(found--) pl->list.erase(pl->list.begin() + found);
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(T &p) {
    list.push_back(p);
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator-=(T &p) {
    unsigned int found = Find(p);
    if(found--)	list.erase(list.begin() + found);
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

    for(unsigned int found, j=0; j<pl->list.size(); j++) {
        found = p.Find(pl->list[j]);
        if(found--) pl->list.erase(pl->list.begin()+ j);
    }//end for

    pl->list.insert(pl->list.end(), p.list.begin(), p.list.end());
    return *pl;
}

/********************************************/
template <class T>
List<T> &List<T>::operator-(List<T> &p) {
    List<T>* pl = new List<T>();
    *pl = *this;

    for(unsigned int found, j=0; j<pl->list.size(); j++) {
        found = p.Find(pl->list[j]);
        if(found--) pl->list.erase(pl->list.begin()+ j);
    }//end for
    return *pl;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T> *p) {
    /*for(unsigned int found, j=0; j<this->list.size(); j++) {
        found = p->Find(this->list[j]);
        if(found--) this->list.erase(this->list.begin()+ j);
    } //end for */
    list.insert(list.end(), p->list.begin(), p->list.end());
    delete p;
    return *this;
}
/********************************************/
template <class T>
List<T> &List<T>::operator+=(List<T> &p) {
    list.insert(list.end(), p.list.begin(), p.list.end());
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

