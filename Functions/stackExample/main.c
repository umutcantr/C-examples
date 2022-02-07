/* This program implements stack data structure and checks  *
 * that are entries  parentheses and braces properly        *
 * nested or not.                                           */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

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
    printf("Stack overflow ");
    exit(0);
}
void stack_underflow()
{
    printf("Stack underflow ");
    exit(0);
}

void main()
{
    char store[STACK_SIZE*2];
    int i = 0;

    make_empty();
    printf("Enter parentheses and/or braces: ");
    scanf("%s", store);

    while(1)
    {
        if(store[i] == '(' | store[i] == '{')
        {
            push(store[i]);
        }

        else if(store[i] == ')' || store[i] == '}')
        {
            pop();
        }

        else if(store[i] == '\0' && top == 0)
        {
            printf("Parenthesis/braces are nested properly\n");
            break;
        }

        else if(store[i] == '\0' && top != 0)
        {
            printf("Parenthesis/braces aren't nested properly\n");
            break;
        }

        i++;
    }
}
