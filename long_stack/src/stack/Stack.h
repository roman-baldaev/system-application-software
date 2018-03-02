//
// Created by roman on 27.02.18.
//

#ifndef LONG_STACK_STACK_H
#define LONG_STACK_STACK_H

template <typename Type> class Stack {

private:

    class Node;
    Node * _head;

public:
    Stack();

    void pushToStack(const Type &);
    Type popFromStack();
    int getStackDimension();

    ~Stack();
};

//
//class Node
//
template <typename Type> class Stack<Type>::Node {

private:
    Type _value;
    Node * _nextInQueue;
public:
    Node(const Type& = 0);
    const Type getValue();
    void setNext(Node*);
    Node* getNext();
};



template <typename Type> Stack <Type>::Node::Node(const Type& value) {

    std::cout << "Node constructor working" << std::endl;
    _value = value;
    std::cout << "Node constructor finish" << std::endl;
}



template <typename Type> const Type Stack <Type>::Node::getValue() {

    return _value;
}


template <typename Type> void Stack <Type>:: Node::setNext(Node* next) {

    _nextInQueue = next;
}


template <typename Type> typename Stack<Type>::Node * Stack <Type>::Node::getNext() {

    return _nextInQueue;
}

//
//class Stack
//

template <typename Type> Stack <Type>::Stack() {

    std::cout << "Default working" << std::endl;
    Node * _head = new Node;
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


template <typename Type> void Stack <Type>::pushToStack(const Type & objectForPush) {

    Node * newHead = new Node(objectForPush);
    newHead->setNext(_head);
    _head = newHead;
}


template <typename Type> Type Stack <Type>::popFromStack() {
    std::cout << "Pop working" << std::endl;
    if (_head) {
        Type value = _head->getValue();
        Node * oldHead = _head;
        _head = _head->getNext();
        delete oldHead;

        return value;
    }

    else {
        std::cout << "STACK IS EMPTY" << std::endl;
    }
}
template <typename Type> Stack <Type>::~Stack() {

    std::cout << "Destructor Working" << std::endl;
    while(_head) {
        Node * oldHead = _head;
        _head = _head->getNext();
        delete oldHead;
    }
//    std::cout<< (int)this << std::endl;
//    while (_nextInQueue) {
//
//
//    }
}
#endif //LONG_STACK_STACK_H
