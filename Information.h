/*
 * Informationz.h
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef INFORMATION_H_
#define INFORMATION_H_
#define DATA_TYPE_INFORMATION "Information"

#include "Data.h"

namespace IL {

class Information: public Data {
public:
    Information(): Data(DATA_TYPE_INFORMATION) {}
    Information(Data& d): Data(d.type) {}
    virtual ~Information() {}
    void Print() { std::cout << DATA_TYPE_INFORMATION << " "; }
};

} /* namespace IL */

#endif /* INFORMATION_H_ */
