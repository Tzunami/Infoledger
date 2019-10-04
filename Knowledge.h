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
    Knowledge(): Data(DATA_TYPE_KNOWLEDGE) {}
    Knowledge(std::string k): Data(DATA_TYPE_KNOWLEDGE), knowledge(k) {}
    virtual ~Knowledge() {}
    void Print() { std::cout<<DATA_TYPE_KNOWLEDGE<<" "; }

    std::string knowledge;
};

} /* namespace Infoledger */

#endif /* KNOWLEDGE_H_ */
