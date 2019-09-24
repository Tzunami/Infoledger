/*
 * GroupList.h
 *
 *  Created on: Dec 5, 2015
 *      Author: tzunami
 */

#ifndef GROUP_H_
#define GROUP_H_
#include "Department.h"
#include "List.h"
#include "Person.h"
#include <string>

namespace EW {
class Department;
/********************************************/
class Group:  public Department, public List<Department> {
public:
	Group(Person &a,  Person &b): Department(a,b) {}
	Group(Person &a,  Person &b, std::string n): Department(a,b,n){}
	//Group(Group &g) {list.push_back(g);}
	virtual ~Group();
	//GroupList &operator+(GroupList &gl) {List<Group>::operator+(gl); GroupList* mygroup=new GroupList(gl); return *mygroup;}
	/*GroupList &operator-(List<Group> &p) {List<Group> *gl=&List<Group>::operator-(p); List<Group>* mygroup=new List<Group>(pl); return *mygroup;}
	GroupList &operator+=(Group &p){People::operator+=(p); return *this;}
	GroupList &operator+=(Group *p){People::operator+=(p); return *this;}
	GroupList &operator-=(Group &p){People::operator-=(p); return *this;}
	GroupList &operator-=(Group *p){People::operator-=(p); return *this;}
	*/
private:
	Group();
};
/********************************************/
} /* namespace EW */
#endif /* GROUP_H_ */
