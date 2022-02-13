/***************************************************************************
Name: Natalia Ksenz
Coding 03
Purpose: The assignment to further train to build proper architecture, file
structures, and loosely coupled architectures.
***************************************************************************/
#include "stack.h"

Stack::Stack() {
    top = -1;
}

Stack::~Stack() {
}

int Stack::push(int num) {

    bool add = true;

    if (top < SIZE-1) {
        stack[++top] = num;
    }
    else {
        add = false;
    }

    return add;
}

// function to remove data from the top of the stack
int Stack::pop() {

    if (isEmpty()) {
        throw "Underflow error!";
    }
    return stack[top--];
}

int Stack::peek() {
    if (isEmpty()) {
        throw "Stack is empty!";
    }
    return stack[top];
}

// function to check if stack is empty
int Stack::isEmpty() {
    bool empty = false;
    if(top == -1) {
        empty = true;
    }
    return empty;
}
