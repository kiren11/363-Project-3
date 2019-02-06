// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Divide_Command.h"

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

//constructor
Divide_Command::Divide_Command(Stack <int> & s)
: Binary_Op_Command(s)
{
    
}

//add two numbers together
int Divide_Command::evaluate (int n1, int n2) {

    //divide by zero case
    if(n2 != 0)
    {
        return n1 / n2; 
    } else {
        //throw exception here
        std::cout<<"Cannot divide by zero";
    }

}

//destructor
Divide_Command::~Divide_Command(void)
{
    
}