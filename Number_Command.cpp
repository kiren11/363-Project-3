// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Number_Command.h"

#include <stdexcept>         // for std::out_of_bounds exception
#include <iostream>          //cin and cout


//constructor
Number_Command::Number_Command (int num)
: s_(s), n_(num)
{

}  
    
void Number_Command::execute (void)
{     
    this->s_.push (this->n_);   
}


//destructor
Number_Command::~Number_Command(void) 
{

}

