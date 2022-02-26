// implementing a stack with a single queue

#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10

int stack[STACK_SIZE];
int count =0;

void push(int x){
    if (count == STACK_SIZE){
        fprintf(stderr, " There is no space in the stack\n");
        return;
    }
    stack[count]=x;
    count++;
}

int pop(){
    if(count==0){
        fprintf(stderr, "nothing to take from the stack\n");
        return -1;
    }
    int result =stack[count-1];
    count--;
    return result;
}

int main(int argc, char* argv[]){
    push(1);
    pop();
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);

    int i;
    for(i=0;i<STACK_SIZE;i++){
        printf("%d ",pop());
    }
    return 0;
}