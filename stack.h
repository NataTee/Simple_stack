/***************************************************************************
Name: Natalia Ksenz
Coding 03
Purpose: The assignment to further train to build proper architecture, file
structures, and loosely coupled architectures.
***************************************************************************/
#ifndef STACK_STACK_H
#define STACK_STACK_H

#define SIZE 10

class Stack {

    public:

      Stack();    // default constructor
      ~Stack();   //destructor

      int push(int);
      int pop();
      int peek();
      int isEmpty();

    private:
      //private variables
      int top;
      int stack[SIZE];
};

#endif //STACK_STACK_H
