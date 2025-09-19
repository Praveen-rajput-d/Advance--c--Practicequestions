#include<stdio.h>
#define MAX_SIZE 100
struct queue{
    int rear;
    int front;
    int queue[MAX_SIZE];
};
void intializequeue(struct queue*q){
    q->front=-1;
    q->rear=-1;
}
//check function that queue is empty//
int isEmpty(struct queue*q){
    return(q->front==-1);
};
int isFull(struct queue*q){
    return(q->rear==MAX_SIZE-1);
};
void enqueue(struct queue*q,int data){
    if(isFull(q)){
        printf("queue is full\n");
        return;
    }
    if(isEmpty(q)){
        q->front=0;
    }
    q->rear++;
    q->queue[q->rear]=data;
};
int dequeue(struct queue*q){
  if(isEmpty(q)){
    printf("queue is empty\n");
    return -1;
  }
  int data=q->queue[q->front];
  if(q->front==q->rear){
    q->front=-1;
    q->rear=-1;
  }else{
    q->front++;
  }
  printf("%d\n",data);
  return data;
}
void display(struct queue*q){
    if(isEmpty(q)){
        printf("queue is empty");
        return;
    }
    for(int i=q->front; i<=q->rear;i++){
        printf("%d",q->queue[i]);
        printf("\n");
    }
};
int main(){
    struct queue q;
    intializequeue(&q);
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,4);
printf("elements in the queue after enqueue operation:");
display(&q);
dequeue(&q);

printf("elemnts inn the queue after dequeue operaion");
display(&q);
return 0;
};