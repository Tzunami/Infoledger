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

namespace IL {
/*********************************************/
class Database { //Type C
public:
	Database();
	Database(Database *db);
	virtual ~Database();
    void Save(Infoledge &i);
	Infoledge Get(unsigned int i);
    void Print();
private:
	std::vector<Infoledge> database;
};
/*********************************************/
} /* namespace IL */
#endif /* DATABASE_H_ */
