#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *array;
};
int isempty(struct queue *q){
    if(q->r=q->f){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct queue*q){
    if(q->r=q->size-1){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(struct  queue*q,int val){
    if(isfull(q)){
        printf("The queue is full");
    }else{
        q->r++;
        q->array[q->r]=val;
    }
}
int Dequeue(struct queue*q,int val){
    int a=-1;
    if(isempty(q)){
        printf("queue is empty");
    }else{
        q->f++;
        a=q->array[q->f];
    }
    return a;
}
int main(){
    struct queue q;
    q.size=100;
    q.f=q.r=-1;
    q.array=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,54);
    enqueue(&q,89);
    printf("Dequeing element:%d",Dequeue(&q));
       printf("Dequeing element:%d",Dequeue(&q));
       if(isempty(&q)){
        printf("queue is empty\n");
       }
       if(isfull(&q)){
        printf("queue is full\n");
       }
       return 0;
}