/* 
 * File: main.cpp
 * Author: alex
 *
 * This is the main() to test and demonstrate
 * a simple integer Stack
 */

#include "main.h"

int main() {
    // seeds the rand() function
    // call only ONCE per application!
    srand(time(NULL));

    Stack stack;
    // testing isEmpty() on empty stack
    if (stack.isEmpty()) {
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;

    // testing filling the stack and overflow
    for (int i = 0; i < STACKSIZE + 5; i++) {
        if (stack.push(i + 1)) {
            cout << "pushed: " << i + 1 << endl;
        } else {
            cout << "failed: " << i + 1 << endl;
        }
    }
    cout << endl;

    // testing isEmpty() on full stack
    if (stack.isEmpty()) {
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;

    // testing peeking on full stack
    try {
        cout << "peeked: " << stack.peek() << endl;
    } catch (...) {
        cout << "failed. stack must be empty." << endl;
    }
    cout << endl;

    // this is a programmer debug routine
    // DO NOT LEAVE THIS IN PRODUCTION CODE
    stack.dumpStack();

    // testing popping whole stack
    for (int i = 0; i < STACKSIZE + 5; i++) {
        try {
            cout << "popped: " << stack.pop() << endl;
        } catch (...) {
            cout << "failed. stack must be empty." << endl;
        }
    }
    cout << endl;

    // this is a programmer debug routine
    // DO NOT LEAVE THIS IN PRODUCTION CODE
    stack.dumpStack();

    //testing peeking at empty
    try {
        cout << "peeked: " << stack.peek() << endl;
    } catch (...) {
        cout << "failed. stack must be empty." << endl;
    }
    cout << endl;

    //testing isEmpty() at empty
    if (stack.isEmpty()) {
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;

    // filling the stack half way with random numbers to begin random tests
    int testint;
    for (int i = 0; i<int(STACKSIZE / 2); i++) {
        testint = rand() % MAX_INT + 1;
        if (stack.push(testint)) {
            cout << "pushed: " << testint << endl;
        } else {
            cout << "failed: " << testint << endl;
        }
    }
    cout << endl;

    /*
     * The following will test random operations with push and pop
     * happening twice as often as peek and isempty
     */
    int choice = rand() % CHOICES + 1;
    for (int i = 0; i < RANDOM_TRIES; i++) {
        switch (choice) {
            case 1:
            case 2:
                // push
                if (stack.push(rand() % MAX_INT + 1)) {
                    cout << "pushed: " << i + 1 << endl;
                } else {
                    cout << "failed: " << i + 1 << endl;
                }
                break;
            case 3:
            case 4:
                // pop
                try {
                    cout << "popped: " << stack.pop() << endl;
                } catch (...) {
                    cout << "failed. stack must be empty." << endl;
                }
                break;
            case 5:
                // peek
                try {
                    cout << "peeked: " << stack.peek() << endl;
                } catch (...) {
                    cout << "failed. stack must be empty." << endl;
                }
                break;
            case 6:
                // isempty
                if (stack.isEmpty()) {
                    cout << "stack is empty" << endl;
                } else {
                    cout << "stack is NOT empty" << endl;
                }
                break;
        }
        choice = rand() % CHOICES + 1;

    }
    
    // this is a programmer debug routine
    // DO NOT LEAVE THIS IN PRODUCTION CODE
    cout << endl;
    stack.dumpStack();
    cout << endl;
    
    return 0;
}
