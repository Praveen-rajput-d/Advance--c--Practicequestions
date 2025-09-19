
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
void linkedlistTraversal(struct Node*ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	struct Node*head;
	struct Node*first;
	struct Node*second;
	struct Node*third;
	struct Node*fourth;
	struct Node*fifth;
	head=(struct Node*)malloc(sizeof(struct Node));
	first=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	fifth=(struct Node*)malloc(sizeof(struct Node));
	head->data=54;
	head->next=first;
	first->data=53;
	first->next=second;
	second->data=90;
	second->next=third;
	third->data=44;
	third->next=fourth;
	fourth->data=33;
	fourth->next=fifth;
	fifth->data=22;
	fifth->next=NULL;
	linkedlistTraversal(head);
}
