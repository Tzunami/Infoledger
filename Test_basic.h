/*
 * test_basic.cpp
 *
 *  Created on: Oct 04, 2019
 *      Author: tzunami
 */

#pragma once
#ifndef TEST_BASIC_H_
#define TEST_BASIC_H_

#include "Infoledger.h"

using namespace Infoledger;

static Content content[] = {{"CEO"}, {"Dentist"}, {"Developer"}, {"Doctor"}};

void addNewData(People& p) {
    unsigned int elm;
    for(auto& person : p.list) {
        if(person->data.list.size() == 0) {
            elm = rand() % 4;
            Knowledge* k = new Knowledge();
            person->data.list.push_back(k);
            person->data.list[person->data.list.size()-1]->content = &content[elm];
        }
    }
}

class Test_Data {
    public:
        Test_Data(){}
        Test_Data(Person &p1, Person &p2, Person &p3, Person &p4, Person &p5, Person &p6, Person &p7,
                      People &pp1, People &pp2, People &pp3,
                      Group &g1, Group &g2, Group &g3){
            *person[0] = p1;
            *person[1] = p2;
            *person[2] = p3;
            *person[3] = p4;
            *person[4] = p5;
            *person[5] = p6;
            *person[6] = p7;
            *people[0] = pp1;
            *people[1] = pp2;
            *people[2] = pp3;
            *group[0] = g1;
            *group[1] = g2;
            *group[2] = g3;
        }

        bool operator!=(Test_Data& td) {
            unsigned int counter = 0;
            for(auto& p: td.person)
                if(p != this->person[counter++])
                    return false;
            return true;
        }

        void Print() {
            for(auto& p: this->person)
                p->Print();
            for(auto& ppl: this->people)
                ppl->Print();
            for(auto& g: this->group)
                g->Print();
        }
    private:
        Person* person[7];
        People* people[3];
        Group* group[3];
};

Test_Data test_basic() {
    //std::cout << "STARTING BASIC TEST...\n" << std::endl;
    /*****************************************************/
    //Testing initializing
    //std::cout << "Initializing People & Data" << std::endl;
    // Type B
    Person pat("Pat");
    Person bob("Bob");
    Person frank("Frank");
    Person sam("Sam");
    Person alice("Alice");
    Person mary("Mary");
    Person sally("Sally");
    /*****************************************************/
    // Person & People
    People ppl_1 = bob + frank + sam + alice;
    addNewData(ppl_1);
   //std::cout <<  "People ppl_1 = bob + frank + sam + alice;" << std::endl;
    //ppl_1.Print();

    People ppl_2 = sally + alice + mary;
    addNewData(ppl_2);
   //std::cout <<  "People ppl_2 = sally + alice + mary;" << std::endl;
    //ppl_2.Print();

    People ppl_3 = ppl_1 + ppl_2;
    addNewData(ppl_3);
    // std::cout <<  "People ppl_3 = ppl_1 + ppl_2;" << std::endl;
    // ppl_3.Print();

   //std::cout <<  "\nppl_2 += pat;" << std::endl;
    ppl_2 += pat;
    //ppl_2.Print();

   //std::cout <<  "ppl_2 -= pat;" << std::endl;
    ppl_2 -= pat;
    //ppl_2.Print();

   //std::cout <<  "ppl_2 += ppl_1;" << std::endl;
    ppl_2 += ppl_1;
    //ppl_2.Print();

   //std::cout <<  "ppl_2 -= ppl_1" << std::endl;
    ppl_2 -= ppl_1;
    //ppl_2.Print();

   //std::cout <<  "\nppl_1" << std::endl;
    //ppl_1.Print();

   //std::cout <<  "\nppl_2 += ppl_1 + alice - bob;" << std::endl;
    ppl_2 += ppl_1 + alice - bob;
    //ppl_2.Print();
   //std::cout <<  "\nppl_1" << std::endl;
    //ppl_1.Print();

   //std::cout <<  "\nReset ppl_1 = alice + mary;" << std::endl;
    ppl_1 = alice + mary;
    //ppl_1.Print();
   //std::cout <<  "\nppl_2 -= ppl_1 - sam;" << std::endl;
    ppl_2 -= ppl_1 - sam;
    //ppl_2.Print();
   //std::cout <<  "\nppl_1" << std::endl;
    //ppl_1.Print();
    /*****************************************************/
   //std::cout <<  "\nPeople" << std::endl;

   //std::cout <<  "\nppl_3 = ppl_1 - ppl_2" << std::endl;
    ppl_3 = ppl_1 - ppl_2;
    //ppl_3.Print();

    /*****************************************************/
   //std::cout <<  "\nInitialize Group (Requires 2 Person(s))" << std::endl;

   //std::cout <<  "\nGroup group_1(alice, mary, Group One);" << std::endl;
    Group group_1(alice, mary, "Group One");
    // group_1.Print();

   //std::cout <<  "\nGroup group_2(sally, sam, Group Two);" << std::endl;
    Group group_2(sally, sam, "Group Two");
    // group_2.Print();

   //std::cout <<  "\nGroup group_3(bob, frank, Group Three);" << std::endl;
    Group group_3(bob, frank, "Group Three");
    // group_3.Print();

    /*****************************************************/
   //std::cout <<  "\nGroup & Person" << std::endl;

   //std::cout <<  "\ngroup_1 = group_1 + bob;" << std::endl;
    group_1 = group_1 + bob;
    // group_1.Print();

   //std::cout <<  "\ngroup_1 = group_1 - bob;" << std::endl;
    group_1 = group_1 - bob;
    // group_1.Print();

   //std::cout <<  "\ngroup_1 += sam;" << std::endl;
    group_1 += sam;
    // group_1.Print();

   //std::cout <<  "\ngroup_1 -= sam;" << std::endl;
    group_1 -= sam;
    // group_1.Print();

   //std::cout <<  "\ngroup_1 = ppl_3;" << std::endl;
    group_1 = ppl_3;
    // group_1.Print();
    /*****************************************************/
   //std::cout <<  "\nGroup, Person(s), & People" << std::endl;

   //std::cout <<  "\ngroup_1 += sam + bob;" << std::endl;
    group_1 += sam + bob;
    // group_1.Print();

   //std::cout <<  "\ngroup_1 -= sam + bob;" << std::endl;
    group_1 -= sam + bob;
    // group_1.Print();

   //std::cout <<  "\ngroup_1 = group_1 + pl_1 + sam - mary;" << std::endl;
    group_1 = group_1 + ppl_1 + sam - mary;
    // group_1.Print();
   //std::cout <<  "\nppl_1" << std::endl;
   //  ppl_1.Print();

   //std::cout <<  "\ngroup_1 = group_1 - bob - alice;" << std::endl;
    group_1 = group_1 - bob - alice;
    // group_1.Print();
   //std::cout <<  "\nppl_1" << std::endl;
   //  ppl_1.Print();

   //std::cout <<  "\ngroup_1 += bob + frank;" << std::endl;
    group_1 += bob + frank;
    // group_1.Print();
   //std::cout <<  "\nppl_1" << std::endl;
   //  ppl_1.Print();

   //std::cout <<  "\ngroup_1 -= bob + frank;" << std::endl;
    group_1 -= bob + frank;
    // group_1.Print();
   //std::cout <<  "\nppl_1" << std::endl;
   //  ppl_1.Print();

   //std::cout <<  "\ngroup_2 = bob + frank;" << std::endl;
    group_2 = bob + frank;
    // group_2.Print();
   //std::cout <<  "\ngroup_1" << std::endl;
    // group_1.Print();
   //std::cout <<  "\ngroup_3 = group_2 + alice - group_1 + bob + mary;" << std::endl;
    group_3 = group_2 + alice - group_1 + bob + mary;
    // group_3.Print();

   //std::cout <<  "\ngroup_1 += group_2 - bob - alice;" << std::endl;
    group_1 += group_2 - bob - alice;
    // group_1.Print();

   //std::cout <<  "\ngroup_2" << std::endl;
    // group_2.Print();
   //std::cout <<  "\ngroup_1 -= group_2 - bob - alice;" << std::endl;
    group_1 -= group_2 - bob - alice;
    // group_1.Print();

    /************************* End ****************************/
   //std::cout <<  "\nEND BASIC TEST...\n" << std::endl;
    Test_Data td(pat, bob, frank, sam, alice, mary, sally,
                     ppl_1, ppl_2, ppl_3,
                     group_1, group_2, group_3);

    return td;
}
#endif /* TEST_BASIC_H_ */
