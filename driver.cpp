#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*
Read the expression character-by-character. As each character is read in:

If the character corresponds to a single digit number (characters ‘0’ to ‘9’), then push the corresponding floating-point number onto the stack.
If the character corresponds to one of the arithmetic operators (characters ‘+’, ‘-‘, ‘*’, ‘/’), then
Pop a number off of the stack. Call it operand1.
Pop a number off of the stack. Call it operand 2.
Combine these operands using the arithmetic operator, as follows
Result = operand2 operator operand1
Push result onto the stack.
When the end of the expression is reached, pop the remaining number off the stack. This number is the value of the expression. Applying this algorithm to the arithmetic expression

34+52/*

Results 17.5 as expected.
*/
char ifOperation(string);
int isParen();
string infix();

int main() {
    string a; //a[i], just shit, it would have to be something else involving the linked list probably

    //finding postfix ~~~
    /*
    input {infix} ( 4 + 2 ) * 5 + 3 
    -> if it is an op -> if it is a parenthesis
    . open stack, closed means we pop operators off the stack to add to postfix;
    if op <- {postfix} = 4;
    if op -> if paren <- 
    //As long as the precedence of the top operator is greater than or equal to 
    the current operator, pop top operator and add to postfix expression
    . push operator onto stack '+';
    if op <- {postfix} = 4 2;
    if op -> if paren -> open goes on the stack, closed means we pop ops off,
    and add ops to postfix expression UNTIL we find {'('};
    {postfix} = 4 2 + ;
    if op -> if paren <- precedence, push '*';
    if op <- 
    {postfix} 4 2 + 5 ;
    if op -> if paren <- precedence, push '*';
    if op -> if paren <- precedence, push '+';
    if op <- , push op, push '3' to stack; 
    {postfix} = 4 2 + 5 * 3 ;
    push op to stack;
    {postfix} = 4 2 + 5 * 3 + ;
    */
    //string a = infix();
    for (int i = 0; i < a.length(); i++) { // a.len => 3 of loops
        if (a[i] == '+') { //add
            //operationStack.push_back(a[i]);
        } else if (a[i] == '-') { //sub

        } else if (a[i] == '*') { //multi
            
        } else if (a[i] == '/') { //div
            
        } else if (a[i] == '(') { //open
            //open the stack?
        } else if (a[i] == ')') { //close
            //close precedence
        } else { //not an operation
            //load into OPERAND stack
        }
    }
    //postfix found ~~~



    //evaluation ~~~
    for (int i = 0; i < a.length(); i++) {
        if (isdigit(a[i])) {
            //pop/pushback/something operand stack
        } else if (a[i] == '+') { //add
            //stack evaluation
            // a[i] + a[i] = out, set to outvar
        } else if (a[i] == '-') { //sub

        } else if (a[i] == '*') { //multi
            
        } else if (a[i] == '/') { //div
            
        } // parens dont exist in {postfix}
    }
    /*
    evaluating postfix,
    operand stack -> push if operand;
    if operator -> evaluate operand stack based on operator;
    push to {operand stack} = 6;
    operand stack = {5 6}
    operation '*';
    evaluation pops, pushes -> '30';
    operand stack = {3 30}
    ooeration '+';
    evaluation pops, pushes -> '33';
    operand stack = {33};
    // make sure the operations only affect 2 up from top
    */
    return 0;
}