// My version of a linear linked listed with single enqueuing to ensure the size in time complexity is O(1) 
#include <stdlib.h>
#include <stdio.h>


struct component{
    int numbers;
    struct component* next;
};

void pop(struct component** stack);
void top(struct component* stack);
void push(int numbers, struct component** stack);

int main()
{
    struct component* main = (struct component*)malloc(sizeof(struct component));
    main -> numbers = 1;
    main -> next = NULL;
    top(main);
    push(2,&main);
    top(main);
    pop(&main);
    push(3,&main);
    top(main);
    pop(&main);
    top(main);

    return 0;
}


void pop(struct component** stack){
    if(*stack != NULL){
        printf("The component %d has been popped \n",(*stack) -> numbers);
        struct component* temp_pointer = *stack;
        *stack = (*stack) -> next;
        free(temp_pointer);
    }
    else{
        printf("The stack is currently empty\n");
    }
}

void top(struct component* stack){
    if(stack != NULL){
        printf("The component on top is: %d\n", stack -> numbers);
    }
    else{
        printf("The stack is currently empty\n");
    }
}
void push(int numbers, struct component** stack){
    struct component* component =(struct component*)malloc(sizeof(struct component));
    component -> numbers = numbers;
    component -> next = *stack;
    (*stack) = component;
}