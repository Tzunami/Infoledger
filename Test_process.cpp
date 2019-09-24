/*
 * main.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */


#include "PenguineCRM.h"
#include <iostream> // Library to print to console

using namespace PCRM;
/*****************************************************/
Data *MyProcess(Person &b, Group &a) {
	std::cout<<"---------- Doing My Process -------------- "<<std::endl;
	Knowledge *k = new Knowledge();
	Data *data = k;
	return data;
}
/*****************************************************/
int test_process() {
	std::cout<<"STARTING...\n"<<std::endl;
	/*****************************************************/
	//Testing initializing
	std::cout<<"\nInitializing Person(s) Type B"<<std::endl;
	// Type B
	Person pat("Pat");
	Person bob("Bob");
	Person frank("Frank");
	Person sam("Sam");
	Person alice("Alice");
	Person mary("Mary");
	Person sally("Sally");
	/*****************************************************/
	std::cout<<"\nInitializing People NOT Type A"<<std::endl;
	// Person & People
	People ppl_1 = bob + frank + sam + alice;
	People ppl_2 = sally + alice + mary;
	People ppl_3 = ppl_1 + ppl_2;
	std::cout<<"People #1"<<std::endl;
	ppl_1.Print();
	std::cout<<"People #2"<<std::endl;
	ppl_2.Print();
	std::cout<<"People #3"<<std::endl;
	ppl_3.Print();
	/*****************************************************/
	std::cout<<"\nInitializing Groups Type B"<<std::endl;
	Group group_A(ppl_1);
	Group group_B(ppl_2);
	Group group_C(ppl_3);
	std::cout<<"\nGroup A"<<std::endl;
	group_A.Print();
	std::cout<<"\nGroup B"<<std::endl;
	group_B.Print();
	std::cout<<"\nGroup C"<<std::endl;
	group_C.Print();
	/*****************************************************/
	std::cout<<"\nCreating Data, Information, Knowledge, Process, Output "<<std::endl;
	Information info;
	Knowledge knowledge;
	Process process = &MyProcess;
	Data* pdata = &info;
	Database database;
	pdata->Print();
	/*****************************************************/
	std::cout<<"\nCreating Infoledge (Information + Knowledge) Type D"<<std::endl;
	std::cout<<"Infoledge il_1(pat, group_A);"<<std::endl;
	Infoledge il_1(pat, group_A);
	il_1.Print();

	std::cout<<"\nInfoledge il_2(frank, group_B, *pdata, process);"<<std::endl;
	Infoledge il_2(frank, group_B, process);
	std::cout<<"\n*pdata = il_2.RunProcess()"<<std::endl;
	pdata = il_2.RunProcess();
	il_2.Print();
	std::cout<<"\npdata->Print();"<<std::endl;
	pdata->Print();
	std::cout<<"\ndatabase.Save(*pdata, il_2);"<<std::endl;
	database.Save(pdata, il_2);

	std::cout<<"\nil_1 = database.Get(0);"<<std::endl;
	il_1 = database.Get(0);
	il_1.Print();
	/************************* End ****************************/
	std::cout << "\nEND" << std::endl;
	return 0;
}




