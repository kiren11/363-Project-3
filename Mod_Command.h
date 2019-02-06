// -*- C++ -*-

//==============================================================================
/**
 * @file       Multiply_Command.h
 *
 * $Id: Multiply_Command.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

#include "Binary_Op_Command.h"
/**
 * @class Divide
 *
 * Handles the remainder of two numbers
 */
class Mod_Command : public Binary_Op_Command 
{
public: 

    //constructor
    Mod_Command(Stack <int> & s);

    //get remainder of two numbers together
    int evaluate (int n1, int n2) const;

    //destructor
    ~Mod_Command(void);
};

#endif // !defined _MOD_COMMAND_H_
