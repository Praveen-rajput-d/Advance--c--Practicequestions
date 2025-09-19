#include<stdio.h>
#include<stdlib.h>
struct Node{
        int data;
        struct Node*prev;
        struct Node*next;
    };
    void linkedlistTraversal(struct Node*ptr){
        while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
        }
    }
    struct Node*insertatfirst(struct Node*head,int data){
      struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
      ptr->next=head;
      ptr->data=data;
      return ptr;
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
    struct Node*insertatend(struct Node*head,int data){
      struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
      ptr->data=data;
      struct Node*p=head;
      while(p->next!=NULL){
        p=p->next;
      }
      p->next=ptr;
      ptr->next=NULL;
      return head;
    };
    struct Node*insertafterNode(struct Node*head,struct Node*prevNode,int data){
      struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
      ptr->data=data;
      ptr->next=prevNode->next;
      prevNode->next=ptr;
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
  head->prev=NULL;
  head->data=33;
  head->next=first;
  first->prev=head;
  first->data=22;
  first->next=second;
  second->prev=first;
  second->data=99;
  second->next=third;
  third->prev=second;
  third->data=10;
  third->next=fourth;
  fourth->prev=third;
  fourth->data=90;
  fourth->next=NULL;
  linkedlistTraversal(head);
  printf("The inserting the first Node is\n");
  head=insertatfirst(head,78);
  linkedlistTraversal(head);
  printf("The Node insert at between is:\n");
  head=insertatbetween(head,3,44);
  linkedlistTraversal(head);
  printf("The Node insert at end:\n");
  head=insertatend(head,55);
  linkedlistTraversal(head);
  printf("The Node insert at after Node:\n");
  head=insertafterNode(head,third,10000);
  linkedlistTraversal(head);


    
}




