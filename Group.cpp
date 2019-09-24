/*
 * Group.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */

#include "Group.h"

namespace PCRM {
/*********************************************************/
Group::Group() {
    //std::cout<<"Group Constructor"<<std::end;
	}
/*********************************************************/
Group::Group(Group *g)  {
	*this=*g;
    //std::cout<<"Group Constructor"<<std::endl;
}
/*********************************************************/
Group::Group(People *pl): People(pl)  {
    People::list = pl->list;
    //std::cout<<"Group Constructor"<<std::endl;
}
/*********************************************************/
Group::Group(People &pl): People(pl)  {
    People::list = pl.list;
    //std::cout<<"Group Constructor"<<std::endl;
}
/*********************************************************/
Group::Group(Person &p1, Person &p2) {
	People::list.push_back(p1);
	People::list.push_back(p2);
	name = "";
	id=0;
    //std::cout<<"Group Constructor"<<std::endl;
}
/*********************************************************/
Group::Group(Person &p1, Person &p2, std::string n) {
	People::list.push_back(p1);
	People::list.push_back(p2);
	name = n;
	id=0;
    //std::cout<<"Group Constructor"<<std::endl;
}
/*********************************************************/
Group::~Group() {
    //std::cout<<"Group Destructor!!!"<<std::endl;
}
/*********************************************************/
} /* namespace PCRM */
