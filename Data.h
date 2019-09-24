/*
 * Data.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef DATA_H_
#define DATA_H_
#include <iostream>

namespace EW {
/************************************/
class Data {
public:
	//constructors
	Data();
	virtual ~Data(){}
	virtual void Print() {std::cout<<"Data Printing"<<std::endl;}
};
/************************************/
} /* namespace EW */
#endif /* DATA_H_ */
