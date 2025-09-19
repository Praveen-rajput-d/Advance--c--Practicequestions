#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *array;
};
int isempty(struct stack*ptr){
if(ptr->top==-1){
return 1;
}else{
    return 0;
}
};
int isFull(struct stack*ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    struct stack *p;
    p->size=3;
    p->top=-1;
    p->array=(int*)malloc(p->size*sizeof(int));
   p->array[0]=33;
   p->array[1]=43;
   p->array[2]=55;
   p->array[3]=32;
   p->array[4]=33;
   p->top++;
    if(isempty(p)){
        printf("The stack is empty");
    }else{
        printf("The stack is not empty");
    };
    printf("\n\n");
    if(isFull(p)){
        printf("stack is full");
    }else{
        printf("The stack is not full");
    }
    return 0;
}