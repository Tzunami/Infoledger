/*
 * Data.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef DATA_H_
#define DATA_H_

#include "Content.h"

enum DataType {ERROR, INFORMATION, KNOWLEDGE};

namespace Infoledger {
/************************************/
class Data {
public:
    // truple in the future
	//constructors
    //Data();
    Data(DataType datatype): type(datatype), content(nullptr), skill(0) {}
    Data(Data& d): type(d.type), content(d.content), skill(0) {}
    //virtual ~Data() {}    
    void Print() {std::cout << "Type: " << type << ", Content: " << content->operator()() << ", Skill: " << skill;}

    DataType type;
    Content* content;
    float skill;
};
/************************************/
} /* namespace Infoledger */
#endif /* DATA_H_ */
