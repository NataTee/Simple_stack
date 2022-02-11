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

    if (top < SIZE) {
        stack[++top] = num;
        cout << "Inserting " << stack[top] << " to the place " << top << endl;
    }
    else {
        throw "Overflow error!";
        add = false;
    }

    return add;
}

// function to remove data from the top of the stack
int Stack::pop() {

    bool remove = true;

    if (isEmpty(top)) {
        throw "Underflow error!";
        remove = false;
    }
    stack[top--];

    return remove;
}

// function to check if stack is empty
int Stack::isEmpty(int top) {
    bool empty = false;
    if(top == -1) {
        empty = true;
    }
    return empty;
}
