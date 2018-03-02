#include <iostream>
#include <string>
#include "./src/stack/Stack.h"
#include <stdlib.h>

int main() {


    Stack <char*> stack;

    std::cout << stack.popFromStack() << std::endl;
    stack.pushToStack("11hello");
    stack.pushToStack("12");
    stack.pushToStack("13");


    std::cout << stack.popFromStack() << std::endl;
    std::cout << stack.popFromStack() << std::endl;
    std::cout << stack.popFromStack() << std::endl;

    std::cout << stack.popFromStack() << std::endl;
    return 0;
}