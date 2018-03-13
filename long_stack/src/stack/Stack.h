//
// Created by roman on 27.02.18.
//

#ifndef LONG_STACK_STACK_H
#define LONG_STACK_STACK_H

#include "../exception/stackExceptionInclude.h"
template <typename Type> class Stack {

public:
    class Node;
    Stack();

    void pushToStack(const Type &);
    Type& popFromStack();
    const int getStackDimension();

    ~Stack();
private:


    Node * _head;
    int _dimension;


};

//
//class Node
//
template <typename Type> class Stack<Type>::Node {

private:
    Type * _valuePointer;
    Node * _nextInQueue;
public:
    Node();
    Node(const Type&);
    Type* getValuePointer();
    void setNext(Node*);
    Node* getNext();
};



template <typename Type> Stack <Type>::Node::Node() {

    _valuePointer = new Type;
    _nextInQueue = NULL;
}


template <typename Type> Stack <Type>::Node::Node(const Type& value) {

    _valuePointer = new Type;
    *_valuePointer = value;
    _nextInQueue = NULL;
}


template <typename Type> Type * Stack <Type>::Node::getValuePointer() {

    return _valuePointer;
}


template <typename Type> void Stack <Type>:: Node::setNext(Node* next) {

    _nextInQueue = next;
}


template <typename Type> typename Stack<Type>::Node * Stack <Type>::Node::getNext() {

    return _nextInQueue;
}

//
//
//
//class Stack
//
//
//

template <typename Type> Stack <Type>::Stack() {

    std::cout << "Default working" << std::endl;
    Node * _head = new Node;
    _dimension = 0;
    std::cout << "After default" << std::endl;
}


//template <typename Type> Stack <Type>::Stack(const Type & object, Stack * nextInQueue) {
//    std::cout << "Construktor working" << std::endl;
//    if (malloc(sizeof(Type)) == NULL) {
//        std::cout << "Stack Overflow" << std::endl;
//    }
//    if (nextInQueue) {
//        std::cout << "Next" << std::endl;
//        _nextInQueue = nextInQueue;
//        _nextInQueue->_value = object;
//    }
//    else {
//        std::cout << "New" << std::endl;
//        _nextInQueue = new Stack;
//        _nextInQueue->_value = object;
//    }
//
//
//    std::cout << "After this" << std::endl;
//}


template <typename Type> void Stack <Type>::pushToStack(const Type & objectForPush) { //константная ссылка поддерживает правосторонние значения
    Node *newHead = (Node *)malloc(sizeof(objectForPush));
    if (newHead == NULL) {
        throw stackOverflow();
    }
    newHead = new Node(objectForPush);
    newHead->setNext(_head);
    _head = newHead;
    _dimension++;

}


template <typename Type> Type& Stack <Type>::popFromStack() {

    if (!_head) {
        throw emptyStackException();
    }
    Type* value = _head->getValuePointer();
    Node *oldHead = _head;
    _head = _head->getNext();
    delete oldHead;
    _dimension--;

    return *value;
}


template <typename Type> const int Stack<Type>::getStackDimension() {

    return _dimension;
}

template <typename Type> Stack <Type>::~Stack() {

    std::cout << "Destructor Working" << std::endl;
    while(_head != NULL) {
        std::cout << "Deleting Node" << std::endl;
        Node * oldHead = _head;
        _head = _head->getNext();
        delete oldHead;
    }

}
#endif //LONG_STACK_STACK_H


class Test {
private:
    char * _str;
public:
    Test() {
        _str = NULL;
    }
    Test(Test & str) {
        std::cout << "Copy constructor working" << std::endl;
    }
};
