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

#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

#include "Expr_Command_Factory.h"

class Stack_Expr_Command_Factory : public Expr_Command_Factory  
{
    public:  

        //constructor
        Stack_Expr_Command_Factory (Stack <int> & stack);   

        virtual Number_Command * create_number_command (int num);     
        
        virtual Add_Command * create_add_command (void);   

        virtual Subtract_Command * create_subtract_command (void); 

        virtual Divide_Command * create_divide_command (void); 

        virtual Multiply_Command * create_multiply_command (void); 

        virtual Mod_Command * create_mod_command (void); 

        //destructor
        ~Stack_Expr_Command_Factory(void);
    
    private:   

        //make a stack object
        Stack <int> & stack_;      
};

#endif // !defined _STACK_EXPR_COMMAND_FACTORY_H_