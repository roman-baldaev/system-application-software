//
// Created by roman on 03.03.18.
//

#ifndef LONG_STACK_EMPTYSTACKEXCEPTION_H
#define LONG_STACK_EMPTYSTACKEXCEPTION_H

#include "stackException.h"

class emptyStackException: public stackException {

public:
    emptyStackException(std::string errorMessage = "Pop from empty stack. Error."):
            stackException(errorMessage){};

};


#endif //LONG_STACK_EMPTYSTACKEXCEPTION_H
