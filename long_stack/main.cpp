#include <iostream>
#include <string>
#include "./src/stack/Stack.h"
#include <stdlib.h>

int main() {
//    int a = 10;
//    int *p = &a;
//    printf("%d\n", *&a);
//    int b = *&a;
//    b = 111111;
//    printf("%d\n", a);
//    printf("%d\n", b);
//    printf("%d\n", *&p);
//    std::cout << "Hello, World!" << std::endl;
//    return 0;

    Stack <char*> stack("10");

//    for (int i = 0; i < 5; i++) {
//        int a;
//        std::cin >> a;
//        stack.pushToStack(a);
//    }
//    for (int i = 0; i < 5; i++) {
//
//        std::cout << stack.popFromStack() << std::endl;
//    }
    std::cout << stack.popFromStack() << std::endl;
    stack.pushToStack("11hello");
    stack.pushToStack("12");
    stack.pushToStack("13");


//    std::cout << stack.popFromStack() << std::endl;
//    std::cout << stack.popFromStack() << std::endl;
//    std::cout << stack.popFromStack() << std::endl;
//    std::cout << stack.popFromStack() << std::endl;
    return 0;
}