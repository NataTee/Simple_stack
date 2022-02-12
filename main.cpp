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

    for (int i=0; i<=SIZE+2; i++) {
        try {
            int num=rand()%1000;
            myStack.push(num);
            cout << num << " inserted" << endl;
        }
        catch (const char* msg) {
            cerr << msg << endl;
        }
    }



    for (int i=0; i<=SIZE+2; i++) {
        try {
            cout << myStack.pop() << " removed" << endl;
        }
        catch (const char* msg) {
            cerr << msg << endl;
        }
    }

    return 0;
}
