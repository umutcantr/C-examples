/*****************************************************************
 *  This program does mathematical calculations in reverse       *
 *  polish notation (rpn) form with stack implementation.        *
 *  To do calculations equal('=') operator should be entried.    *
 ****************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* C99 only */

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* function prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);


void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow()
{
    printf("Expression too complex ");
    exit(0);
}
void stack_underflow()
{
    printf("Not enough operands in expression ");
    exit(0);
}

void main()
{
    char ch;
    while(1)
    {
      printf("Enter an RPN expression:");
      make_empty();

        do{
        scanf(" %c", &ch);

        if(ch >= 48 && ch <= 57)
        {
            push(ch - '0');
        }

        else if(ch == '*' || ch == '/' || ch == '-' || ch == '+')
        {
            int result;
            int op1 =  pop();
            int op2 =  pop();

            switch(ch)
            {
            case '*':
                result = op1 * op2;
                break;
            case '/':
                result = op1 / op2;
                break;
            case '-':
                result = op1 - op2;
                break;
            case '+':
                result = op1 + op2;
                break;
            default:
                break;
            }
            push(result);
        }

        else if(ch == '=')
        {
            printf("Value of expression:%d \n", contents[top - 1]);
            break;
        }

        else
        {
            return;
        }

        }
        while(ch != '=');

    }
}
