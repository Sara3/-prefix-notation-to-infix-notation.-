//----------------------------------------------------------------------------
// File -------- stackfunctions.h
// Programmer -- Sabera Daqiq

// 
// This file contains declarations for the class stingstack and for toinfix function
// functions. See the accompanying implementation file for details.
//----------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

#ifndef STACKFUNCTIONS_H
#define STACKFUNCTIONS_H

const int CAPACITY=100;
class stringstack{
        private:
            string list[CAPACITY];
            int size;
        public:
            void push(string newitem);
            void show()const;
            string pop();
            bool isEmpty()const;
            bool isFull() const;
            string peek () const;
            stringstack ();
            int getsize() const;
            bool isOperator(char item) const;
};

	string toinfix(string prefix);
#endif 
