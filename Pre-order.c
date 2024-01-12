#include<stdio.h>
#include<stdlib.h>

struct node{  // This is a block/structure of the node 
    int data;
    struct node *left;
    struct node *right;
};



struct node *create(int data){ //basic creation code for a node 
    struct node *n; 
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n; 
}

void pre_order(struct node *root){

    if(root!=NULL)
    {
        printf("%d",root->data);
        pre_order(root->left);
        pre_order(root->right);
    }

}

void main(){
    struct node *p = create(0); //it is the root 
    struct node *p1 = create(1); // contains 1 as data 
    struct node *p2 = create(2);
    struct node *p3 = create(3);
    struct node *p4 = create(4);
    struct node *p5 = create(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p4 ->right = p5; 


    pre_order(p);
}