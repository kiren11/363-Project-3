// -*- C++ -*-

//==============================================================================
/**
 * @file       Queue.h
 *
 * $Id: Queue.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

#include "Expr_Command.h"

#include <exception>
#include <iostream>

/**
 * @class Binary Op Command
 *
 * Handles binary operations
 */
class Binary_Op_Command : public Expr_Command 
{       
     public:   

        //constructor
        Binary_Op_Command (Stack <int> & s);

        void execute (void);    
            
        virtual int evaluate (int n1, int n2) const = 0;   

        //destructor
        ~Binary_Op_Command(void);
        
     private:   

        //create a stack that the postfix evaluator can use
        Stack <int> &  s_; 
};

#endif // !defined _BINARY_OP_COMMAND_H_