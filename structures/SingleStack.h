/**-----------------------------------------------------
                    Structure includes
 -----------------------------------------------------*/

#pragma once

/**-----------------------------------------------------
                    Structure definition
 -----------------------------------------------------*/

typedef struct SingleStack
{
    struct Element *base;
}
SingleStack;

/**-----------------------------------------------------
                    Functions prototypes
 -----------------------------------------------------*/

SingleStack* new_SingleStack();
void dispose_Stack(SingleStack*);

void push_SingleStack(SingleStack*, Element*);
void pop_SingleStack(SingleStack*);

Element* peek_SingleStack(SingleStack*);

unsigned int height_SingleStack(SingleStack*);
void print_SingleStack(SingleStack*);
