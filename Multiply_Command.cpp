// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Multiply_Command.h"

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

//constructor
Multiply_Command::Multiply_Command (Stack <int> & s)
: Binary_Op_Command(s)
{

}

//multiply two numbers together
int Multiply_Command::evaluate (int n1, int n2) {
    return n1 * n2; 
}

//destructor
Multiply_Command::~Multiply_Command(void) 
{

}

