/*
 * PCRMError.h
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
	PCRM_Error(std::string e);
	void PrintError() {}

private:
	std::string ew_error;
};
/*************************************************/
} /* namespace PCRM */
/*************************************************/
#endif /* PCRM_ERROR_H_ */
