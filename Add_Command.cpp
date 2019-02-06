// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Command.h"
#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>

//constructor
Add_Command::Add_Command (Stack <int> & s)
: Binary_Op_Command(s)
{
    
}


//add two numbers together
int Add_Command::evaluate (int n1, int n2) 
{
    return n1 + n2; 
}

Add_Command::~Add_Command(void) 
{

}