/*
 * Information.h
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef INFORMATION_H_
#define INFORMATION_H_

#include "Data.h"

namespace Infoledger {

class Information: public Data {
public:
    Information(): Data(DataType::INFORMATION) {}
    Information(Data& d): Data(DataType::INFORMATION) {
        if(d.type != DataType::INFORMATION) throw;
        type = DataType::INFORMATION;
    }
    virtual ~Information() {}

    void Print() { std::cout << "Information "; }
};

} /* namespace Infoledger */

#endif /* INFORMATION_H_ */
