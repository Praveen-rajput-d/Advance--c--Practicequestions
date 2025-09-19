#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *array;
};
int isEmpty(struct stack*ptr){
    if(ptr->top==-1){
   return 1;
    }else{
        return 0;
    }
};
int isfull(struct stack*ptr){
    if(ptr->size=ptr->size-1){
        return 1;
    }else{
        return 0;
    }
};
void push(struct stack*ptr,int val){
    if(isfull(ptr)){
printf("The stack is overflow\n");
    }else{
        ptr->top++;
        ptr->array[ptr->top]=val;
    }
};
int pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("stack is underflow\n");
        return -1;
    }else{
        int val=ptr->array[ptr->top];
        ptr->top--;
        ptr->top=ptr->top-1;
        return val;
    }
}
int peek(struct stack*sp,int i){
    int arrayInd=sp->top-i+1;
if(arrayInd<0){
    printf("Not a valid position for the stack\n");
        return-1;
    }
    else{
   return sp->array[arrayInd];
    }
}

int main(){
struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=5;
sp->top=-1;
sp->array=(int*)malloc(sp->size*sizeof(int));
push(sp,43);
push(sp,33);
push(sp,22);
push(sp,11);
push(sp,89);



printf("After pushing, full:%d\n",isfull(sp));
printf("After pushing, Empty:%d\n",isEmpty(sp));
printf("popped  %d from the stack \n",pop(sp));
printf("popped  %d from the stack \n",pop(sp));
printf("popped  %d from the stack \n",pop(sp));
for(int j=0;j<sp->top+1;j++){
printf("The value at index %d is %d\n",j,peek(sp,j));
}







return 0;
}