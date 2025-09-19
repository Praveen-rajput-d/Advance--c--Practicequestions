#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void linkedlisttraversal(struct Node*head){
    struct Node*ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct  Node*insertatfirst(struct Node*head, int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node*p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
 struct Node*insertatbetween(struct Node*head,int index,int data){
      struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
      struct Node*p=head;
      int i=0;
      while(i!=index-1){
        p=p->next;
        i++;
      }
      ptr->data=data;
      ptr->next=p->next;
      p->next=ptr;
      return head;
    }
  




int main(){
    struct Node*head;
    struct Node*first;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=third;
    third->data=4;
    third->next=fourth;
    fourth->data=5;
    fourth->next=head;
    printf("The circular linked list before inseet at first Node:\n");
    linkedlisttraversal(head);
    printf("The circular linkedlist after insert the first Node:\n");
    head=insertatfirst(head,0);
    linkedlisttraversal(head);
    head=insertatbetween(head,2,43);
    linkedlisttraversal(head);
}