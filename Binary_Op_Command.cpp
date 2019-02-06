// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Binary_Op_Command.h"

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>


//constructor
Binary_Op_Command::Binary_Op_Command(Stack <int> & s) {
: s_ (s)
{ 

} 



void Binary_Op_Command::execute (void) {

    int n2 = s_.top (), n1 = s_.top ();     
    
    int result = this->evaluate (n1, n2);     
    
    s_.push (result); 
}

Binary_Op_Command::~Binary_Op_Command(void) 
{   
    //delete the stack
    delete this->s_;
}