
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
void linkedlistTraversal(struct Node*ptr){
	while(ptr!=NULL){
		printf("\n%d\n",ptr->data);
		ptr=ptr->next;
	}
};
struct Node*insertatfirst(struct Node*head,int data){
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
};
struct Node*insertatbetween(struct Node*head,int index, int data){
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
}
struct Node*insertafterNode(struct Node*head,struct Node *prevNode,int data){
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=prevNode->next;
	prevNode->next=ptr;
	return head;

}


int main(){
	struct Node*head;
	struct Node*second;
	struct Node*third;
	struct Node*fourth;
	struct Node*fifth;
	struct Node*sixth;
	struct Node*seventh;
	struct  Node*eighth;
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	sixth=(struct Node*)malloc(sizeof(struct Node));
		seventh=(struct Node*)malloc(sizeof(struct Node));
			eighth=(struct Node*)malloc(sizeof(struct Node));



	head->data=25;
	head->next=second;
	second->data=20;
	second->next=third;
	third->data=15;
	third->next=fourth;
	fourth->data=10;
	fourth->next=fifth;
	fifth->data=13;
	fifth->next=sixth;
	sixth->data=17;
	sixth->next=seventh;
	seventh->data=21;
	seventh->next=eighth;
	eighth->data=30;
	eighth->next=NULL;
linkedlistTraversal(head);
head=insertatfirst(head,89);
printf("The starting node of the linkedlist is given below:\n");
linkedlistTraversal(head);
head=insertatbetween(head,2,54);
linkedlistTraversal(head);
head=insertatend(head,88);
linkedlistTraversal(head);
head=insertafterNode(head,third,9);
linkedlistTraversal(head);
printf("\n\n");		
}





