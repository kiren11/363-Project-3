   // -*- C++ -*-
// $Id: Array_Base.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

#include "Stack.h"

#include <cstring>          // for size_t definition

class Expr_Command 
{ 
    public:  
    
        virtual void execute (void) = 0;
};

#endif // !defined _EXPR_COMMAND_FACTORY_H_