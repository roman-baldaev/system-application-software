//
// Created by roman on 03.03.18.
//

#include "Exception.h"


const void Exception::what() {

    std::cerr << _errorMessage << std::endl;
}