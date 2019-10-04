/*
 * IL_Error.h
 *
 *  Created on: Nov 20, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef IL_ERROR_H_
#define IL_ERROR_H_

#include <string>

namespace IL {
/*************************************************/
class IL_Error {
public:
	virtual ~IL_Error(){}
    IL_Error(std::string e) : il_error(e) {}
	void PrintError() {}

private:
    std::string il_error;
};
/*************************************************/
} /* namespace IL */
/*************************************************/
#endif /* IL_ERROR_H_ */
