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

#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_


#include "Number_Command.h"
#include "Add_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Subtract_Command.h"
#include "Mod_Command.h"

class Expr_Command_Factory  
{ 
public:   

    //destructor
    virtual ~Expr_Command_Factory (void) = 0;   

    //if number
    virtual Number_Command * create_number_command (int num) = 0;  

    //addition operator
    virtual Add_Command * create_add_command (void) = 0;   

    //subtraction operator
    virtual Subtract_Command * create_subtract_command (void) = 0;  

    //multiply operator
    virtual Multiply_Command * create_multiply_command (void) = 0;

    //divide operator
    virtual Divide_Command * create_divide_command (void) = 0;
    
    //modulus operator
    virtual Mod_Command * create_mod_command (void) = 0;

private:   
    // prevent the following operations   

    //TODO: try to uncomment these commments

    //copy constructor
    // Expr_Command_Factory (const Expr_Command_Factory &);   

    // //assignment operator
    // const Expr_Command_Factory & operator = (const Expr_Command_Factory &); 
}; 

#endif // !defined _EXPR_COMMAND_FACTORY_H_