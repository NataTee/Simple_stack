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
    }
    else {
        add = false;
    }

    return add;
}
