/*
 * =====================================================================================
 *
 *       Filename:  Stack.h
 *
 *    Description:  Fig. 20.13 - Template Stack class definition derived from
 *                  class List
 *
 *        Version:  1.0
 *        Created:  14/03/17 12:45:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Siidney Watson - siidney.watson.work@gmail.com
 *   Organization:  LolaDog Studio
 *
 * =====================================================================================
 */
#pragma once

#include "List.h"

template <typename STACKTYPE>
class Stack : private List<STACKTYPE> {
 public:
    // push calls the List function insertAtFront
    void push(const STACKTYPE &data) { this->insertAtBack(data); }
    // pop calls the List function removeFromFront
    bool pop(STACKTYPE data) { return this->removeFromBack(data); }
    // isStackEmpty calls the List function isEmpty
    bool isStackEmpty() const { return this->isEmpty(); }
    // printStack calls the List function print
    void printStack() const { this->print(); }
    // returns the top of the stack
    STACKTYPE stackTop() const { return this->end()->getData(); }
};
