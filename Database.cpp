/*
 * Database.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: tzunami
 */

#include "Database.h"

namespace IL {

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
void Database::Save(Infoledge &i) {
	Infoledge info(i);   
	database.push_back(info);
}
/*************************************************/
Infoledge Database::Get(unsigned int i) {
	if(i<=database.size()) {
		Infoledge info(database[i]);
        //info.previous = &database[i];
		return info;
	}
	try {
        throw IL_Error("Infoledge Constructor Failed");
	} catch(IL_Error &e) {e.PrintError();}
	return database[i];
}
/*************************************************/
void Database::Print() {
    for(unsigned int i=0; i<database.size(); i++) {
        std::cout << "#: " << i << std::endl;
		database[i].Print();
        std::cout << std::endl;
    }
}
/*************************************************/
} /* namespace IL */
