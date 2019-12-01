/*
 * Output.h
 *
 *  Created on: Dec 5, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef DATABASE_H_
#define DATABASE_H_

#include "Data.h"
#include "Infoledge.h"
#include <vector>
#include "IL_Error.h"

namespace Infoledger {
/*********************************************/
class Database { //Type C
public:
    void Save(Infoledge &i);
	Infoledge Get(unsigned int i);
    void Print();
private:
	std::vector<Infoledge> database;
};
/*********************************************/
} /* namespace Infoledger */
#endif /* DATABASE_H_ */
