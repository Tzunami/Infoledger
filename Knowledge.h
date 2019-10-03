/*
 * Knowledgez.h
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */

#pragma once
#ifndef KNOWLEDGE_H_
#define KNOWLEDGE_H_

#include "Data.h"

namespace PCRM {

class Knowledge: public Data {
public:
    Knowledge(std::string k);
	virtual ~Knowledge();
    void Print() { std::cout<<"Knowledge: "<< knowledge; }

    std::string knowledge;
};

} /* namespace PCRM */

#endif /* KNOWLEDGE_H_ */
