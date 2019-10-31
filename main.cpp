/*
 * main.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */

#include "Infoledger.h"
#include <iostream> // Library to print to console

// Testing Exclusive
#include "Test_basic.h"
#include "Test_basic_ptr.h"
#include "Test_process.h"
#include "Test_process_ptr.h"

using namespace Infoledger;

int main() {
    test_basic();
    test_basic_ptr();
    test_process();
    test_process_ptr();
	return 0;
}




