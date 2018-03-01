//
// Created by roman on 27.02.18.
//

#ifndef LONG_STACK_NODE_H
#define LONG_STACK_NODE_H


template <typename T> class Node {

private:
    T _value;
    Node *_upper;

protected:
    Node(T);
    Node(T, Node*);
    Node(Node <T> &);

};


#endif //LONG_STACK_NODE_H
