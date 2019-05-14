/**-----------------------------------------------------
                    Structure definition
 -----------------------------------------------------*/

typedef struct Stack
{
    int height;
    struct Element *base;
}
Stack;

/**-----------------------------------------------------
                    Functions prototypes
 -----------------------------------------------------*/

Stack* new_Stack();
void dispose_Stack(Stack *_stack);

void push_Stack(Stack *_stack, Element *_element);
void pop_Stack(Stack *_stack);

Element* peek_Stack(Stack *_stack);

void print_Stack(Stack *_stack);
