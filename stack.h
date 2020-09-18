/* 
 * File:   stack.h
 * Author: alex
 *
 * A simple Integer Stack. It is the corrected version
 * of https://www.studytonight.com/data-structures/stack-data-structure
 */

#ifndef STACK_H
#define STACK_H

#define STACKSIZE 10

/* included only for programmer debugging
   should not be part of the completed version
   DO NOT LEAVE THIS IN PRODUCTION CODE */
#include <iostream>

class Stack {

public:

    Stack();  // constructor
    ~Stack();  // destructor

    int pop();
    int peek();
    bool push(int);
    bool isEmpty();

    // this is a programmer debug routine
    // DO NOT LEAVE THIS IN PRODUCTION CODE
    void dumpStack();

private:

    int top;  //do not initialize here, that's what the constructor is for
    int stack[STACKSIZE];

};


#endif //STACK_INTSTACK_H