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

#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_

#include "Binary_Op_Command.h"
/**
 * @class Multiply
 *
 * Handles the multiplication of two numbers
 */
class Multiply_Command : public Binary_Op_Command 
{
public:

    //constructor
    Multiply_Command (Stack <int> & s);

    //add two numbers together
    int evaluate (int n1, int n2) const;

    //destructor
    ~Multiply_Command(void);
};

#endif // !defined _MULTIPLY_COMMAND_H_
