#include "Stack_Expr_Command_Factory.h"
#include "Stack.h"

#include <sstream>
#include <iostream>

//helper function - determines whether input is operator
bool isOperator(const std::string & infix)
{
    if(infix == "+" || infix == "-" || infix == "/" || infix == "*" || infix == "%")
    {
        return true;
    }

    return false;
}

//helper function - to see if it input is a number
bool isOperand(const std::string & infix)
{
    if(isOperator(infix) && infix != "("  && infix != ")")
    {
        return true;
    }

    return false;
}

//set precendence for operators
int setOpPriority(const std::string infix) 
{
    int priority = -1;

    if(infix == "+") 
    {      
      priority = 1;

    } else if (infix == "-") {
      priority = 1;

    } else if (infix == "*") {
      priority = 2;

    } else if (infix == "/") {
      priority = 2;

    } else if (infix == "%") {
      priority = 2;

    }

    return priority;
}

//convert from infix to postfix
int infix_to_postfix (const std::string & infix, Expr_Command_Factory & factory, Array <Expr_Command *> & postfix)
{   
    // create a input stream parser   
    std::istringstream input(infix); 
    
    // current token in string/stream  
    std::string token;               

    // created command object   
    Expr_Command * cmd = 0;  

    //create temporary stack
    Stack <Expr_Command *> temp;  

    //declare the concrete factory
    Stack <int> result;  

    //while not the end of the file
    while (!input.eof()) {  

        input >> token; 

        //if input is an operator
        if(isOperator(infix))
        {
            //operator is plus    
            if(token == "+") {
                cmd = factory.create_add_command();
            
            //operator is minus
            } else if (token == "-") {
                cmd = factory.create_subtract_command(); 

            //operator is multiply
            } else if (token == "*") {
                cmd = factory.create_multiply_command(); 
            
            //operator is divide
            } else if (token == "/") {
                cmd = factory.create_divide_command();

            //operator is modulus
            } else if (token == "%") {
                cmd = factory.create_mod_command();

            //else its not an operator, but a number
            }  else { 

                //convert string to int
                int convertedString = std::stoi(token);

                cmd = factory.create_number_command(convertedString);
            }      

            //while stack is not empty, compare priority of operators
            // while(!result.is_empty() && (setOpPriority(result.top()) <= setOpPriority()))
            // {
            //   std::cout<<result.top();
            //   result.pop();
            // }
          
          int convertedString = std::stoi(token);

          result.push(convertedString);

        //handle left paren
        } else if (token == "(") {
            
          temp.push(token);

        //handle right paren
        } else if (token == ")") {

          //keep popping from stack until it reaches left paren
          while (result.top() != "("){

            std::cout<<result.top();

            result.pop();
          }

        result.pop();

        //else just return input
        } else {

          std::cout<<infix;
        }
    } 
} 

int main (int argc, char * argv [])
{

  //final answer
  int result;

  std::cout<<"start of testing..."<<std::endl;

  std::string infix = "5 + 4";

  std::cin >> infix;


  //invoke infix to postfix function
  Array <Expr_Command *> postfix;

  Stack_Expr_Command_Factory factory (result); 

  result = infix_to_postfix (infix, factory, postfix);


  // evaluate postfix 
  int res = result.top();

  std::cout<<"end of testing..."<<std::endl;

  return 0;
}