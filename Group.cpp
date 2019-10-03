/*
 * Group.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */

#include "Group.h"

namespace PCRM {
/*********************************************************/
Group::Group(): People() {
    //std::cout<<"Group Constructor"<<std::end;
	}
/*********************************************************/
Group::Group(People *pl) {
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
    People::list.push_back(&p1);
    People::list.push_back(&p2);
    //std::cout<<"Group Constructor"<<std::endl;
}
/*********************************************************/
Group::Group(Person &p1, Person &p2, std::string name): ID(name) {
    People::list.push_back(&p1);
    People::list.push_back(&p2);
    //std::cout<<"Group Constructor"<<std::endl;
}
/*********************************************************/
Group::~Group() {
    //std::cout<<"Group Destructor!!!"<<std::endl;
}
//operators Person
/*********************************************************/
Group &Group::operator+(Person &p)
{
    People *pl=&People::operator+(p);
    Group *group=new Group(pl);
    return *group;
}
/*********************************************************/
Group &Group::operator-(Person &p) {
    People *pl=&People::operator-(p);
    Group *group=new Group(pl);
    return *group;
}
//operators People Equal
/*********************************************************/
Group &Group::operator+=(Person &p) {
    People::operator+=(p);
    return *this;
}
/*********************************************************/
Group &Group::operator-=(Person &p) {
    People::operator-=(p);
    return *this;
}
/*********************************************************/
//operators People Equal
/*********************************************************/
Group &Group::operator=(People &p) {
    People::operator=(p);
    return *this;
}
/*********************************************************/
Group &Group::operator=(People *p) {
    People::operator=(p);
    return *this;
}
//operators People
/*********************************************************/
Group &Group::operator+(People &p) {
    People *pl=&People::operator+(p);
    Group* group=new Group(pl);
    return *group;
}
/*********************************************************/
Group &Group::operator-(People &p) {
    People *pl=&People::operator-(p);
    Group* group=new Group(pl);
    return *group;
}
/*********************************************************/
Group &Group::operator+=(People &p){
    People::operator+=(p);
    return *this;
}
/*********************************************************/
Group &Group::operator+=(People *p){
    People::operator+=(p);
    return *this;
}
/*********************************************************/
Group &Group::operator-=(People &p){
    People::operator-=(p);
    return *this;
}
/*********************************************************/
Group &Group::operator-=(People *p){
    People::operator-=(p);
    return *this;
}
/*********************************************************/
//operators Group
Group &Group::operator=(Group &g) {
    People::operator=(g);
    return *this;
}
/*********************************************************/
Group &Group::operator=(Group *g) {
    People::operator=(g);
    return *this;
}
/*********************************************************/
Group &Group::operator+(Group &g) {
    People *pl=&People::operator+(g);
    Group* group=new Group(pl);
    return *group;
}
/*********************************************************/
Group &Group::operator-(Group &g) {
    People *pl=&People::operator-(g);
    Group* group=new Group(pl);
    return *group;
}
/*********************************************************/
Group &Group::operator+=(Group &g){
    People::operator+=(g);
    return *this;}
/*********************************************************/
Group &Group::operator+=(Group *g){
    People::operator+=(g);
    return *this;
}
/*********************************************************/
Group &Group::operator-=(Group &g){
    People::operator-=(g);
    return *this;
}
/*********************************************************/
Group &Group::operator-=(Group *g){
    People::operator-=(g);
    return *this;
}
/*********************************************************/
} /* namespace PCRM */
