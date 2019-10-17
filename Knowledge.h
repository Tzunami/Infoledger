/*
 * Knowledgez.h
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */

#pragma once
#ifndef KNOWLEDGE_H_
#define KNOWLEDGE_H_
#define DATA_TYPE_KNOWLEDGE "Knowledge"

#include "Data.h"

namespace Infoledger {

class Knowledge: public Data {
public:
    Knowledge(): Data(DataType::KNOWLEDGE) {}
    Knowledge(Data& d): Data(DataType::KNOWLEDGE) {
        if(d.type != DataType::KNOWLEDGE) throw;
        type = DataType::KNOWLEDGE;
    }
    //virtual ~Knowledge() {}
    void Print() { std::cout << "Knowledge "; }
};

} /* namespace Infoledger */

#endif /* KNOWLEDGE_H_ */
