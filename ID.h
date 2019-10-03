/*
 * ID.h
 *
 *  Created on: Dec 3, 2015
 *      Author: tzunami
 */
#pragma once
#ifndef ID_H_
#define ID_H_

#include <string>



namespace PCRM {
/***************************************************************/
class ID {
public:
    ID(const std::string n): name(n), id(id_counter++) {}
    virtual ~ID(){}
    std::string GetName() const {return name;}
    unsigned int GetID() const {return id;}

protected:
    ID(): name(""), id(id_counter++) {}

private:
    std::string name;
    unsigned int id;
    static unsigned int id_counter;
};
/***************************************************************/
} /* namespace PCRM */

#endif /* ID_H_ */
