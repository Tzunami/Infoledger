/*
 * test_basic.cpp
 *
 *  Created on: Oct 4, 2019
 *      Author: tzunami
 */

#pragma once
#ifndef TEST_BASIC_PTR_H_
#define TEST_BASIC_PTR_H_

#include <iostream> // Library to print to console
#include "Test_basic.h"
#include "Infoledger.h"

using namespace Infoledger;

int test_basic_ptr() {
    std::cout << "STARTING BASIC TEST...\n" << std::endl;
    /*****************************************************/
    //Testing initializing
    std::cout << "Initializing People & Data" << std::endl;
    // Type B
    Person* pat = new Person("Pat");
    Person* bob = new Person("Bob");
    Person* frank = new Person("Frank");
    Person* sam = new Person("Sam");
    Person* alice = new Person("Alice");
    Person* mary = new Person("Mary");
    Person* sally = new Person("Sally");
    /*****************************************************/
    // Person & People
    People ppl_1 = *bob + *frank + *sam + *alice;
    addNewData(ppl_1);
    std::cout << "\nPeople ppl_1 = *bob + *frank + *sam + *alice;" << std::endl;
    ppl_1.Print();

    People ppl_2 = *sally + *alice + *mary;
    addNewData(ppl_2);
    std::cout << "\nPeople ppl_2 = *sally + *alice + *mary;" << std::endl;
    ppl_2.Print();

    People ppl_3 = ppl_1 + ppl_2;
    addNewData(ppl_3);
    std::cout << "\nPeople ppl_3 = ppl_1 + ppl_2;" << std::endl;
    ppl_3.Print();

    std::cout << "\nppl_2 += *pat;" << std::endl;
    ppl_2 += *pat;
    ppl_2.Print();

    std::cout << "\nppl_2 -= *pat;" << std::endl;
    ppl_2 -= *pat;
    ppl_2.Print();

    std::cout << "\nppl_2 += ppl_1;" << std::endl;
    ppl_2 += ppl_1;
    ppl_2.Print();

    std::cout << "\nppl_2 -= ppl_1" << std::endl;
    ppl_2 -= ppl_1;
    ppl_2.Print();

    std::cout << "\nppl_1" << std::endl;
    ppl_1.Print();

    std::cout << "\nppl_2 += ppl_1 + *alice - *bob;" << std::endl;
    ppl_2 += ppl_1 + *alice - *bob;
    ppl_2.Print();
    std::cout << "\nppl_1" << std::endl;
    ppl_1.Print();

    std::cout << "\nReset ppl_1 = *alice + *mary;" << std::endl;
    ppl_1 = *alice + *mary;
    ppl_1.Print();
    std::cout << "\nppl_2 -= ppl_1 -*sam;" << std::endl;
    ppl_2 -= ppl_1 - *sam;
    ppl_2.Print();
    std::cout << "\nppl_1" << std::endl;
    ppl_1.Print();
    /*****************************************************/
    std::cout << "\nPeople" << std::endl;

    std::cout << "\nppl_3 = ppl_1 - ppl_2" << std::endl;
    ppl_3 = ppl_1 - ppl_2;
    ppl_3.Print();

    /*****************************************************/
    std::cout << "\nInitialize Group (Requires 2 Person(s))" << std::endl;

    std::cout << "\nGroup group_1(*alice, *mary, Group One);" << std::endl;
    Group group_1(*alice, *mary, "Group One");
    group_1.Print();

    std::cout << "\nGroup group_2(*sally,*sam, Group Two);" << std::endl;
    Group group_2(*sally,*sam, "Group Two");
    group_2.Print();

    std::cout << "\nGroup group_3(*bob, *frank, Group Three);" << std::endl;
    Group group_3(*bob, *frank, "Group Three");
    group_3.Print();

    /*****************************************************/
    std::cout << "\nGroup & Person" << std::endl;

    std::cout << "\ngroup_1 = group_1 + *bob;" << std::endl;
    group_1 = group_1 + *bob;
    group_1.Print();

    std::cout << "\ngroup_1 = group_1 - *bob;" << std::endl;
    group_1 = group_1 - *bob;
    group_1.Print();

    std::cout << "\ngroup_1 += *sam;" << std::endl;
    group_1 += *sam;
    group_1.Print();

    std::cout << "\ngroup_1 -= *sam;" << std::endl;
    group_1 -= *sam;
    group_1.Print();

    std::cout << "\ngroup_1 = ppl_3;" << std::endl;
    group_1 = ppl_3;
    group_1.Print();
    /*****************************************************/
    std::cout << "\nGroup, Person(s), & People" << std::endl;

    std::cout << "\ngroup_1 += *sam + *bob;" << std::endl;
    group_1 += *sam + *bob;
    group_1.Print();

    std::cout << "\ngroup_1 -= *sam + *bob;" << std::endl;
    group_1 -= *sam + *bob;
    group_1.Print();

    std::cout << "\ngroup_1 = group_1 + pl_1 + *sam - *mary;" << std::endl;
    group_1 = group_1 + ppl_1 + *sam - *mary;
    group_1.Print();
    std::cout << "\nppl_1" << std::endl;
    ppl_1.Print();

    std::cout << "\ngroup_1 = group_1 - *bob - *alice;" << std::endl;
    group_1 = group_1 - *bob - *alice;
    group_1.Print();
    std::cout << "\nppl_1" << std::endl;
    ppl_1.Print();

    std::cout << "\ngroup_1 += *bob + frank;" << std::endl;
    group_1 += *bob + *frank;
    group_1.Print();
    std::cout << "\nppl_1" << std::endl;
    ppl_1.Print();

    std::cout << "\ngroup_1 -= *bob + frank;" << std::endl;
    group_1 -= *bob + *frank;
    group_1.Print();
    std::cout << "\nppl_1" << std::endl;
    ppl_1.Print();

    std::cout << "\ngroup_2 = *bob + frank;" << std::endl;
    group_2 = *bob + *frank;
    group_2.Print();
    std::cout << "\ngroup_1" << std::endl;
    group_1.Print();
    std::cout << "\ngroup_3 = group_2 + *alice - group_1 + *bob + *mary;" << std::endl;
    group_3 = group_2 + *alice - group_1 + *bob + *mary;
    group_3.Print();

    std::cout << "\ngroup_1 += group_2 - *bob - *alice;" << std::endl;
    group_1 += group_2 - *bob - *alice;
    group_1.Print();

    std::cout << "\ngroup_2" << std::endl;
    group_2.Print();
    std::cout << "\ngroup_1 -= group_2 - *bob - *alice;" << std::endl;
    group_1 -= group_2 - *bob - *alice;
    group_1.Print();

    /************************* End ****************************/
    std::cout << "\nEND BASIC TEST...\n" << std::endl;
    return 0;
}
#endif /* TEST_BASIC_PTR_H_ */
