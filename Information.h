/*
 * Informationz.h
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */

#ifndef INFORMATION_H_
#define INFORMATION_H_

#include "Data.h"

namespace PCRM {

class Information: public Data {
public:
	Information();
	virtual ~Information();
	void Print() {std::cout<<"Information Printing"<<std::endl;}
};

} /* namespace PCRM */

#endif /* INFORMATION_H_ */
