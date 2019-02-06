// -*- C++ -*-

//==============================================================================
/**
 * @file       Add_Command.h
 *
 * $Id: Add_Command.h 380 2010-02-08 05:10:33Z hillj $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Binary_Op_Command.h"

/**
 * @class Add
 *
 * Handles the addition of two numbers
 */
class Add_Command : public Binary_Op_Command 
{
public:

    //constructor
    Add_Command (Stack <int> & s);

    //add two numbers together
    int evaluate (int n1, int n2) const;

    //destructor
    ~Add_Command(void);
};

#endif // !defined _ADD_COMMAND_H_

