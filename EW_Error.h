/*
 * EWError.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef EW_ERROR_H_
#define EW_ERROR_H_

#include <string>

namespace EW {
/*************************************************/
class EW_Error {
public:
	virtual ~EW_Error(){}
	EW_Error(std::string e);
	void PrintError() {}

private:
	std::string ew_error;
};
/*************************************************/
} /* namespace EW */
/*************************************************/
#endif /* EW_ERROR_H_ */
