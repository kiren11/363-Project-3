// -*- C++ -*-

//==============================================================================
/**
 * @file       Divide_Command.h
 *
 * $Id: Divide_Command.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIVIDE_COMMAND_H_
#define _DIVIDE_COMMAND_H_

#include "Binary_Op_Command.h"

/**
 * @class Divide
 *
 * Handles the division of two numbers
 */
class Divide_Command : public Binary_Op_Command 
{
public:

    //constructor
    Divide_Command (Stack <int> & s);

    //add two numbers together
    int evaluate (int n1, int n2) const;

    //destructor
    ~Divide_Command (void);
};

#endif // !defined _DIVIDE_COMMAND_H_