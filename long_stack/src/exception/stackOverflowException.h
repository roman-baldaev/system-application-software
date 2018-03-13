//
// Created by roman on 03.03.18.
//

#ifndef LONG_STACK_STACKOVERFLOW_H
#define LONG_STACK_STACKOVERFLOW_H

#include "stackException.h"

class stackOverflow: public stackException {

public:
    stackOverflow(std::string errorMessage = "Stack overflow exception"):
            stackException(errorMessage){};
};


#endif //LONG_STACK_STACKOVERFLOW_H
