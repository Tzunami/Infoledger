/*
 * Data.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef DATA_H_
#define DATA_H_

#include <iostream> // can remove

namespace Infoledger {
/************************************/
class Data {
public:
    // truple in the future
	//constructors
    //Data();
    Data(std::string type_name): type(type_name) {}
    Data(Data& d): type(d.type) {}
    virtual ~Data() {}
    virtual void Print() { std::cout<<"Data Printing"<<std::endl; }

    const std::string type;
};
/************************************/
} /* namespace Infoledger */
#endif /* DATA_H_ */
