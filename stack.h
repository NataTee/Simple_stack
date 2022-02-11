/***************************************************************************
Name: Natalia Ksenz
Coding 03
Purpose: The assignment to further train to build proper architecture, file
structures, and loosely coupled architectures.
***************************************************************************/
#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <iostream>
#define SIZE 10

using std::cout;
using std::endl;

class Stack {
    public:

    Stack();    // default constructor
    ~Stack();   //destructor

    void push(int);
    int pop();
    void isEmpty();

    protected:
    //private variables
    int top;
    int stack[SIZE];
};

#endif //STACK_STACK_H
