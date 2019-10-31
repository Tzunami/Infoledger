/*
 * main.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */

#include "Infoledger.h"
#include <iostream> // Library to print to console

// Testing Exclusive
#include "Test_basic_ptr.h"
#include "Test_process_ptr.h"

using namespace Infoledger;

int main() {
    unsigned int counter = 0;
    Test_Data td[4];

    td[counter++] = test_basic();
    td[counter++] = test_basic_ptr();
    td[counter++] = test_process();
    td[counter++] = test_process_ptr();

    for(unsigned int a=0; a<counter-1; a++) {
        for(unsigned int b=a+1; b<counter; b++) {
            if(td[a] != td[b]) {
                std::cout << a << " != " << b << std::endl;
            } // end if
        } // end for
    } // end for

	return 0;
}




