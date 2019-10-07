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

enum DataType {ERROR, INFORMATION, KNOWLEDGE};

namespace Infoledger {
/************************************/
class Data {
public:
    // truple in the future
	//constructors
    //Data();
    Data(DataType datatype): type(datatype), content("") {}
    Data(Data& d): type(d.type), content("") {}
    virtual ~Data() {}

    DataType type;
    std::string content;
};
/************************************/
} /* namespace Infoledger */
#endif /* DATA_H_ */
