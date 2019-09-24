/*
 * Knowledgez.h
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */

#ifndef KNOWLEDGE_H_
#define KNOWLEDGE_H_

#include "Data.h"

namespace EW {

class Knowledge: public Data {
public:
	Knowledge();
	virtual ~Knowledge();
	void Print() {std::cout<<"Knowledge Printing"<<std::endl;}
};

} /* namespace EW */

#endif /* KNOWLEDGE_H_ */
