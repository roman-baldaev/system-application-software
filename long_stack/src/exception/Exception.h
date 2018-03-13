//
// Created by roman on 03.03.18.
//

#ifndef LONG_STACK_EXCEPTION_H
#define LONG_STACK_EXCEPTION_H

#include <iostream>
#include <string>

class Exception {

private:
    std::string _errorMessage;

public:
    Exception(std::string errorMessage =  "You have a problem, sir"):
            _errorMessage(errorMessage){};
    virtual const void what();
};


#endif //LONG_STACK_EXCEPTION_H
