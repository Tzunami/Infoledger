/*
 * PCRM_Error.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef PCRM_ERROR_H_
#define PCRM_ERROR_H_

#include <string>

namespace PCRM {
/*************************************************/
class PCRM_Error {
public:
	virtual ~PCRM_Error(){}
    PCRM_Error(std::string e) : pcrm_error(e) {}
	void PrintError() {}

private:
    std::string pcrm_error;
};
/*************************************************/
} /* namespace PCRM */
/*************************************************/
#endif /* PCRM_ERROR_H_ */
