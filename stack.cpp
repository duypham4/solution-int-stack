/* 
 * File:   stack.cpp
 * Author: alex
 * 
 * A simple Integer Stack. It is the corrected version
 * of https://www.studytonight.com/data-structures/stack-data-structure
 */

#include "stack.h"

Stack::Stack() {
    /* the 'this' designation is optional. use it where there
     * is ambiguity or just to be complete and precise. here it
     * is used just to show it's usage.
     */
    this->top = -1;
}

Stack::~Stack() {
    //there is nothing to do to clean up this object, so this is blank
}

bool Stack::push(int i) {
    bool pushed = false;

    if (top < STACKSIZE - 1) {
        stack[++top] = i;
        pushed = true;
    }

    return pushed;
}

int Stack::pop() {

    if (top < 0) {
        //throw an int because we cannot return one
        throw -1;
    }
    return stack[top--];
}

int Stack::peek() {

    if (top < 0) {
        //throw an int because we cannot return one
        throw -1;
    }
    return stack[top];
}

bool Stack::isEmpty() {
    return (top < 0);
}

// this is a programmer debug routine
// DO NOT LEAVE THIS IN PRODUCTION CODE
void Stack::dumpStack() {
    std::cout << "dumping whole stack..." << std::endl;
    if (!isEmpty()) {
        for (int i = top; i >= 0; i--) {
            std::cout << stack[i] << std::endl;
        }
    } else {
        std::cout << "\tstack is empty" << std::endl;
    }
    std::cout << std::endl;
}