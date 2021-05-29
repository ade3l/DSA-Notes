#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

int count=0;

void inorder(struct node* root ,int k){
    if(root==NULL)
        return;
    inorder(root->left,k);
    if(++count==k)
        printf("%d\t",root->data);
    inorder(root->right,k);
}

struct node *insert(struct node *root, int i) {

    if (root==NULL){
        struct node * new_node;
        new_node=(struct node*)malloc(sizeof (struct node));
        new_node->data=i;
        new_node->left=new_node->right=NULL;
        root=new_node;
    }
    else{
        if(i<=root->data){
            root->left=insert(root->left,i);
        }
        else{
            root->right=insert(root->right,i);
        }
    }
    return root;
}
int main() {
    /*Code To Test the logic
	  Creating an example tree
                12
			   /   \
			  5     17
			 / \    /
			3   7  13
           /     \
          1       9
    */
    struct node *root;
    root = NULL;
    root=insert(root,12);
    root=insert(root,5);
    root=insert(root,17);
    root=insert(root,3);
    root=insert(root,7);
    root=insert(root,13);
    root=insert(root,1);
    root=insert(root,9);
    inorder(root,8);
    return 0;
}
