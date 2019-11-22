/*
 * Content.h
 *
 *  Created on: Dec 4, 2015
 *      Author: tzunami
 */

#pragma once
#ifndef CONTENT_H_
#define CONTENT_H_

#include <iostream>
#include "Data.h"

namespace Infoledger {

class Content {
public:
    Content(): content("") {}
    Content(std::string c): content(c) {}
    //virtual ~Content() {}
    std::string operator()() const { return content; }
    void Print() { std::cout << "Content: " << content <<" "; }
private:
    std::string content;
};

} /* namespace Infoledger */
#endif /* CONTENT_H_ */
