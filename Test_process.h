/*
 * main.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */

#pragma once
#ifndef TEST_PROCESS_H_
#define TEST_PROCESS_H_

#include "Test_basic.h"
#include <iostream> // Library to print to console

using namespace Infoledger;
/*****************************************************/
void MyProcess(Infoledge &il, Person &person, Group &group) {
   //  std::cout<<"MyProcess(Person, Group)"<<std::endl;
    Knowledge *k = new Knowledge();
    k->content = new Content("Discovery");
    person.data.list.push_back(k);
    group.data.list.push_back(k);
    il.result = k;
}
/*****************************************************/
Test_Data test_process() {
   //  std::cout<<"------------------------------------- STARTING TEST PROCESS...\n"<<std::endl;

	//Testing initializing
   //  std::cout<<"Initializing Person(s) Type B"<<std::endl;
	// Type B
	Person pat("Pat");
	Person bob("Bob");
	Person frank("Frank");
	Person sam("Sam");
	Person alice("Alice");
	Person mary("Mary");
	Person sally("Sally");

	/*****************************************************/
    //std::cout<<"\nInitializing People NOT Type A"<<std::endl;
	// Person & People
    pat.data.list[0]->content = &content[0];

	People ppl_1 = bob + frank + sam + alice;
	People ppl_2 = sally + alice + mary;
	People ppl_3 = ppl_1 + ppl_2;
    //std::cout<<"People #1"<<std::endl;
    // ppl_1.Print();
    //std::cout<<"People #2"<<std::endl;
    //  ppl_2.Print();
    //std::cout<<"People #3"<<std::endl;
    //  ppl_3.Print()

	/*****************************************************/
    //std::cout<<"\nInitializing Groups Type B"<<std::endl;
	Group group_A(ppl_1);
	Group group_B(ppl_2);
	Group group_C(ppl_3);
    //std::cout<<"\nGroup A"<<std::endl;
    //  group_A.Print();
    //std::cout<<"\nGroup B"<<std::endl;
    //  group_B.Print();
    //std::cout<<"\nGroup C"<<std::endl;
    //  group_C.Print();

	/*****************************************************/
   //  std::cout<<"\nCreating Data, Process, Output "<<std::endl;
	Information info;
    Process process = &MyProcess;
	Database database;

    /*****************************************************/
   //  std::cout<<"Creating Infoledge (Information + Knowledge) Type D"<<std::endl;
   //  std::cout<<"\nInfoledge il_1(pat, group_A);"<<std::endl;
	Infoledge il_1(pat, group_A);
    // il_1.Print();
    database.Save(il_1);
   //  std::cout<<"\ndatabase.Save(il_1);"<<std::endl;

   //  std::cout<<"\nInfoledge il_2(frank, group_B, process);"<<std::endl;
    Infoledge il_2(frank, group_B, process);
    // il_2.Print();

   //  std::cout<<"\n\nil_2.RunProcess()"<<std::endl;
    il_2.RunProcess();
   //  std::cout<<"process result:"<<std::endl;
    // il_2.Print();

   //  std::cout<<"\ndatabase.Save(il_2);"<<std::endl;
    database.Save(il_2);

   //  std::cout<<"\ndatabase.Print"<<std::endl;
    // database.Print();

   //  std::cout<<"\nil_1 = database.Get(0);"<<std::endl;
    il_1 = database.Get(0);
    // il_1.Print();

   //  std::cout<<"\n\nil_1 = database.Get(1);"<<std::endl;
    il_1 = database.Get(1);
    // il_1.Print();

	/************************* End ****************************/
   //  std::cout << "\n\nEND TEST PROCESS...\n" << std::endl;
    Test_Data td(pat, bob, frank, sam, alice, mary, sally,
                     ppl_1, ppl_2, ppl_3,
                     group_A, group_B, group_C);

    return td;
}
#endif /* TEST_PROCESS_H_ */



