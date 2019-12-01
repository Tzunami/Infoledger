/*
 * Data.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef DATA_H_
#define DATA_H_

#include <vector>
#include "Content.h"

enum DataType {ERROR, INFORMATION, KNOWLEDGE};

namespace Infoledger {
struct DblData;
/************************************/
class Data {
public:
    // truple in the future
	//constructors
    //Data();
    Data(DataType datatype): type(datatype), content(nullptr), skill(0) {}
    Data(DataType datatype, float skl): type(datatype), content(nullptr), skill(skl) {}
    Data(Data& d): type(d.type), content(d.content), skill(d.skill) {}
    virtual ~Data() { delete content; }
    void Print();

    Data &operator=(Data& d);
    DblData &operator/(Data& d);
    Data &operator*(Data& d);
    //DblData &operator/=(Data& d);
    Data &operator*=(Data& d);

    DataType type;
    Content* content;
    float skill;
};
/************************************/
struct DblData {
    Data *denominator, *remainder;
    DblData(): denominator(nullptr), remainder(nullptr) {}
    ~DblData() {delete denominator; delete remainder;}
};
/************************************/
} /* namespace Infoledger */
#endif /* DATA_H_ */
