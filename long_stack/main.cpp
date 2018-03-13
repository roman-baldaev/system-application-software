#include <iostream>
#include <string>
#include "./src/stack/Stack.h"
#include <stdlib.h>

int main() {
    int i = 0;
    try {
        Stack<char *> stack;


        stack.pushToStack("adsad");
        stack.pushToStack("adsd");
        stack.pushToStack("ads");

        std::cout << stack.popFromStack() << std::endl;
        std::cout << stack.popFromStack() << std::endl;
        std::cout << stack.popFromStack() << std::endl;
//        std::cout << stack.popFromStack() << std::endl;
        return 0;
    }

//    try {
//        int n = 10000;
//        Stack<char*> stack;
//        char* a = new char[n];
//        for(int i = 0; i < n; i++) {
//            a[i] = 'a';
//            std::cout << i << std::endl;
//        }
//        int b = 2;
//        std::cout << sizeof(a) << std::endl;//????????? 8 ??????????????
//        std::cout << sizeof(b) << std::endl;//????????? 8 ??????????????
//        std::cout << a << std::endl;
//        //
//        bool flag = true;
//        while(flag) {
//            stack.pushToStack(a);
//            std::cout << i++ << std::endl;
//        }
//        return 0;
//    }
    catch (stackException &Exception1) {
        Exception1.what();
        std::cout << i << std::endl;
        exit(i);
    }
    //сообщение об ошибке в разных местах программы
    //виртуальные методы
    //возврат после ошибки
    //конструктор по умолчанию
    //конструктор копирования
    //возврат и передача по значению и ссылке
}



