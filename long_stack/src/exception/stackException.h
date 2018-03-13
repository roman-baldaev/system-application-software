//
// Created by roman on 03.03.18.
//

#ifndef LONG_STACK_STACKEXCEPTION_H
#define LONG_STACK_STACKEXCEPTION_H

#include "Exception.h"

class stackException: public Exception {

public:
    stackException(std::string errorMessage = "Stack error"): Exception(errorMessage){};
};


#endif //LONG_STACK_STACKEXCEPTION_H
