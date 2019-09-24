/*
 * Database.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: tzunami
 */

#include "Database.h"

namespace PCRM {

Database::Database() {
	//std::cout<<"Database Constructor"<<std::endl;
}
/*************************************************/
Database::Database(Database *db) {
	*this = *db;
	//std::cout<<"Database Constructor"<<std::endl;
}
/*************************************************/
Database::~Database() {
	//std::cout<<"Database Destructor"<<std::endl;
}
/*************************************************/
void Database::Save(Data *result, Infoledge &i) {
	Infoledge info(i);
	info.data = *result;
	database.push_back(info);
	delete result;
}
/*************************************************/
Infoledge Database::Get(unsigned int i) {
	if(i<=database.size()) {
		Infoledge info(database[i]);
		info.previous = &database[i];
		return info;
	}
	try {
		throw PCRM_Error("Infoledge Constructor Failed");
	} catch(PCRM_Error &e) {e.PrintError();}
	return database[i];
}
/*************************************************/
void Database::Print() {
	for(unsigned int i=0; i<database.size(); i++)
		database[i].Print();
}
/*************************************************/
} /* namespace PCRM */
