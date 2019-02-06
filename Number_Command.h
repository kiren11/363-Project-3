   // -*- C++ -*-
// $Id: Stack.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_

#include "Expr_Command.h"

class Number_Command : public Expr_Command 
{
public:   
    
    //constructor
    Number_Command (int num); 
    
    void execute (void);

    //destructor
    ~Number_Command(void);

private:   

    //make stack object
    Stack <int> & s_;   
    
    int n_; 
};

#endif  // !defined _NUM_COMMAND_H_