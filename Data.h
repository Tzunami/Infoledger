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

namespace PCRM {
/************************************/
class Data {
public:
    // truple in the future
	//constructors
	Data();
    //Data(std::string s);
    virtual ~Data() {}

    virtual void Print() {
        std::cout<<"Data Printing"<<std::endl;
    }
};
/************************************/
} /* namespace PCRM */
#endif /* DATA_H_ */
