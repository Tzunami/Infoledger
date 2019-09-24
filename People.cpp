/*
 * People.cpp
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */

#include "People.h"

namespace PCRM {
/****************************************************/
People::People(){
	//std::cout<<"People Constructor"<<std::endl;
}
/****************************************************/
People::People(List<Person> *lp): List<Person>(lp) {
	//std::cout<<"People Constructor"<<std::endl;
}
/****************************************************/
People::People(People *pl){
	*this=*pl;
	//std::cout<<"People Constructor"<<std::endl;
}
/****************************************************/
People::~People(){
	//std::cout<<"People Deconstructor!!"<<std::endl;
}
/********************************************************/
} /* namespace PCRM */
