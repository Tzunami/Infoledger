/*
 * ID.h
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef ID_H_
#define ID_H_

#include <string>

namespace PCRM {
/***************************************************************/
class ID {
public:
	ID(): name(""), id(++id_counter) {}
	ID(std::string &n): name(n), id(++id_counter) {}
	ID(std::string &n, unsigned int &my_id): name(n), id(my_id) {}
	virtual ~ID(){}
	//members
	std::string name;
	unsigned int id;

	static unsigned int id_counter;
};
/***************************************************************/
} /* namespace PCRM */

#endif /* ID_H_ */
