// -*- C++ -*-

//==============================================================================
/**
 * @file       Subtract_Command.h
 *
 * $Id: Subtract_Command.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

#include "Binary_Op_Command.h"

/**
 * @class Subtract
 *
 * Handles the subtraction of two numbers
 */
class Subtract_Command : public Binary_Op_Command 
{
public:

    //constructor
    Subtract_Command (Stack <int> & s);

    //add two numbers together
    int evaluate (int n1, int n2) const;

    //destructor
    ~Subtract_Command(void);
};

#endif // !defined _SUBTRACT_COMMAND_H_
