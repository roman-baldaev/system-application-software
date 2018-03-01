//
// Created by roman on 27.02.18.
//

#ifndef LONG_STACK_STACK_H
#define LONG_STACK_STACK_H


template <typename Type> class Stack {

private:
    Type _value;
    Stack * _nextInQueue;

public:
    Stack();
    Stack(const Type &, Stack * = 0);
    Stack(const Stack <Type> &);

    ~Stack();

    void pushToStack(const Type &);
    Type popFromStack();
    int getStackDimension();

};



template <typename Type> Stack <Type>::Stack() {
    std::cout << "Default working" << std::endl;

    _value = 0;
    _nextInQueue = 0;

    std::cout << "After default" << std::endl;
}


template <typename Type> Stack <Type>::Stack(const Type & object, Stack * nextInQueue) {
    std::cout << "Construktor working" << std::endl;
    if (malloc(sizeof(Type)) == NULL) {
        std::cout << "Stack Overflow" << std::endl;
    }
    if (nextInQueue) {
        std::cout << "Next" << std::endl;
        _nextInQueue = nextInQueue;
        _nextInQueue->_value = object;
    }
    else {
        std::cout << "New" << std::endl;
        _nextInQueue = new Stack;
        _nextInQueue->_value = object;
    }


    std::cout << "After this" << std::endl;
}

//need update
template <typename Type> Stack <Type>::Stack(const Stack <Type> & stackForCopy) {

    _nextInQueue = new Stack;
    Stack * iteratorTo = _nextInQueue;
    Stack * iteratorFrom = stackForCopy._nextInQueue;

    while (iteratorFrom != NULL) {
        (iteratorTo -> _value) = (iteratorFrom -> _value);
        iteratorFrom = (iteratorFrom -> _nextInQueue);
        iteratorTo = (iteratorTo -> _nextInQueue);
    }
}


template <typename Type> void Stack <Type>::pushToStack(const Type & objectForPush) {

    Stack * newHead = new Stack(objectForPush, _nextInQueue);
    _nextInQueue = newHead;
}


template <typename Type> Type Stack <Type>::popFromStack() {
    std::cout << "pop" << std::endl;
    if (_nextInQueue) {
        Type value = _nextInQueue->_value;
        Stack * oldHead = _nextInQueue;
        _nextInQueue = oldHead->_nextInQueue;
        delete oldHead;

        return value;
    }

    else {
        std::cout << "STACK IS EMPTY" << std::endl;
    }
}
template <typename Type> Stack <Type>::~Stack() {

    std::cout<< "Destructor working "<< std::endl;
    delete this;
//    std::cout<< (int)this << std::endl;
//    while (_nextInQueue) {
//
//
//    }
}
#endif //LONG_STACK_STACK_H
