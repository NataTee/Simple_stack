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

    for (int test=0; test<=SIZE+100; test++) {
        int option = rand()%2;
        if (option==0) {
            try {
                int num=rand()%1000;
                myStack.push(num);
                cout << "Number " << num << " inserted." << endl;
            }
            catch (const char* msg) {
                cerr << msg << endl;
            }
        }
        else {
            try {
                cout << myStack.pop() << " removed." << endl;
            }
            catch (const char* msg) {
                cerr << msg << endl;
            }
        }
    }

    return 0;
}
