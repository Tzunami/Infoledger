/*
 * Department.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */

#include "Department.h"

namespace PCRM {
/*********************************************************/
Department::Department() {
	//std::cout<<"Department Constructor"<<std::end;
	}
/*********************************************************/
Department::Department(Department *g)  {
	*this=*g;
	//std::cout<<"Department Constructor"<<std::endl;
}
/*********************************************************/
Department::Department(People *pl): People(pl)  {
	//People::list = pl->list;
	//std::cout<<"Department Constructor"<<std::endl;
}
/*********************************************************/
Department::Department(People &pl): People(pl)  {
	//People::list = pl->list;
	//std::cout<<"Department Constructor"<<std::endl;
}
/*********************************************************/
Department::Department(Person &p1, Person &p2) {
	People::list.push_back(p1);
	People::list.push_back(p2);
	name = "";
	id=0;
	//std::cout<<"Department Constructor"<<std::endl;
}
/*********************************************************/
Department::Department(Person &p1, Person &p2, std::string n) {
	People::list.push_back(p1);
	People::list.push_back(p2);
	name = n;
	id=0;
	//std::cout<<"Department Constructor"<<std::endl;
}
/*********************************************************/
Department::~Department() {
	//std::cout<<"Department Destructor!!!"<<std::endl;
}
/*********************************************************/
} /* namespace PCRM */
