#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int size;
    int top;
    int *ptr;
};
int isEmpty(struct myarray *a){
    if(a->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct myarray *b){
    if(b->top==b->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct myarray*p,int val){
    if(isFull(p)){
        printf("stack is overflow");
    }else{
        p->ptr++;
        p->ptr[p->top]=val;
    }
}
int pop(struct myarray *c){
    int d;
    if(isEmpty(c)){
        printf("stack is underflow\n");
    }else{
       d= c->ptr[c->top];
        c->top--;
        printf("element is %d",d);
    }
}
int main(){
    struct myarray*stk;
    stk->size=5;
    stk->top=-1;
    stk->ptr=(int*)malloc(stk->size*sizeof (int));
    push(stk,10);
    push(stk,43);
    push(stk,54);
    pop(stk);
    
    
     
   
   
}