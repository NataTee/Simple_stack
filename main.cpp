/***************************************************************************
Name: Natalia Ksenz
Coding 03
Purpose: The assignment to further train to build proper architecture, file
structures, and loosely coupled architectures.
***************************************************************************/

#include "main.h"

int main(int argc, char** argv) {
    Stack myStack;

    // Use the time function to get a "seed" value for srand
    srand((unsigned int)time(0));

    //test push() and peek()
    cout << "Testing push() and peek()" << endl;
    for (int test=0; test<=SIZE*5; test++) {
        int num=rand()%1000;
        cout << "Random number is " << num << endl;
        if (myStack.push(num)){
            cout << num << " inserted." << endl;
        }
        else {
            cout << "Overflow error" << endl;
        }
        try {
            cout << myStack.peek() << " is the last inserted value." << endl;
        }
        catch (const char* msg) {
            cerr << msg << endl;
        }
    }

    // test pop() and peek()
    cout << "\nTesting pop() and peek()" << endl;
    for (int test=0; test<=SIZE*5; test++) {

        try {
            cout << myStack.pop() << " removed." << endl;
        }
        catch (const char* msg) {
            cerr << msg << endl;
        }
        try {
            cout << myStack.peek() << " is the last inserted value." << endl;
        }
        catch (const char* msg) {
            cerr << msg << endl;
        }
    }

    // test all the fuctions together
    cout << "\nTesting isEmpty(), push(), pop(), and peek()" << endl;
    for (int test=0; test<=SIZE+5; test++) {
        for (int test2=0; test2<=SIZE+5; test2++) {
            int num=rand()%1000;
            if (myStack.isEmpty()){
                cout << "The stack is empty." << endl;
            }
            else {
                cout << "The stack is not empty." << endl;
            }
            cout << "Random number is " << num << endl;
            if (myStack.push(num)){
                cout << num << " inserted." << endl;
            }
            else {
                cout << "Overflow error" << endl;
            }
            try {
                cout << myStack.peek() << " is the last inserted value." << endl;
            }
            catch (const char* msg) {
                cerr << msg << endl;
            }
        }

        for (int test3=0; test3<=SIZE; test3++) {
            try {
                cout << myStack.pop() << " removed." << endl;
            }
            catch (const char* msg) {
                cerr << msg << endl;
            }
        }

    }

    // test push() if stack is epmty
    cout << "\nTesting if stack is empty and push()" << endl;
    for (int test=0; test<=SIZE*3; test++) {
        int num=rand()%1000;
        cout << "Random number is " << num << endl;
        if (myStack.isEmpty()) {
            myStack.push(num);
            cout << num << " inserted." << endl;
        }
        else {
            cout << "The stack is not empty." << endl;
        }
    }

    // test pop() if stack is not epmty
    cout << "\nTesting if stack is not empty and pop()" << endl;
    for (int test=0; test<=SIZE+10; test++) {
        if (!myStack.isEmpty()) {
            cout << "The stack is not empty." << endl;
            try {
                cout << myStack.pop() << " removed." << endl;
            }
            catch (const char* msg) {
                cerr << msg << endl;
            }
        }
        else {
            cout << "The stack is empty." << endl;
        }
    }

    //test random operations
    cout << "\nTesting random operations" << endl;
    for (int test=0; test<=SIZE+100; test++) {
        int option = rand()%4;
        int num=rand()%1000;

        switch(option) {
          case 0:
              if (myStack.push(num)){
                  cout << num << " inserted." << endl;
              }
              else {
                  cout << "Overflow error" << endl;
              }
              break;

          case 1:
              try {
                  cout << myStack.pop() << " removed." << endl;
              }
              catch (const char* msg) {
                  cerr << msg << endl;
              }
              break;

          case 2:
              try {
                  cout << myStack.peek() << " is the last inserted value." << endl;
              }
              catch (const char* msg) {
                  cerr << msg << endl;
              }
              break;

          case 3:
              if (myStack.isEmpty()){
                  cout << "The stack is empty." << endl;
              }
              else {
                  cout << "The stack is not empty." << endl;
              }
              break;
        }
    }

    return 0;
}
