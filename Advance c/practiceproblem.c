#include<stdio.h>
#include<malloc.h>
struct Node{
    int data;
    struct Node*left;
    struct Node*right;
};
struct Node*createNode(int data){
    struct Node*n;
    n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main(){
    struct Node*p;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=54;
    p->left=NULL;
    p->right=NULL;
    struct Node*p1;
    p1=(struct Node*)malloc(sizeof(struct Node));
    p1->data=43;
    p1->left=NULL;
    p1->right=NULL;

    struct Node*p2;
    p2=(struct Node*)malloc(sizeof(struct Node));

    p2->left=NULL;
    p2->right=NULL;
    p->left=p1;
    p->right=p2;
  //  linking the left and right subtree with the root Node//
  p->left = p1;
  p->right=p2;
  return 0;

}