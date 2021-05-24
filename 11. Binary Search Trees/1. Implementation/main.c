#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int i);

bool search(struct node *pNode, int i);

void inorder(struct node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}

struct node *delete(struct node *root, int i);

int main() {
    struct node *root;
    root = NULL;
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
    root=insert(root,12);
    root=insert(root,5);
    root=insert(root,17);
    root=insert(root,3);
    root=insert(root,7);
    root=insert(root,13);
    root=insert(root,1);
    root=insert(root,9);

    if(search(root,17))
        printf("\nfound\n");
    else
        printf("\nnot found\n");
    root=delete(root,5);
    inorder(root);
    return 0;
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

bool search(struct node *root, int i) {
    if(root==NULL) return false;
    else if(i==root->data) return true;
    else if(i<=root->data) return search(root->left,i);
    else  return search(root->right,i);
}

struct node *findmin(struct node *root);

struct node *delete(struct node *root, int i) {
    if(root==NULL)
        return root;
    else if(i<root->data)
    {

        root->left=delete(root->left,i);
    }
    else if(i>root->data) {

        root->right = delete(root->right, i);
    }
    else{
        //The node is found
        //case 1: No child
        if(root->left==NULL && root->right==NULL){
            free(root);
            root=NULL;

        }

        //case 2: one child
        else if(root->left==NULL){
            struct node* temp=root;
            root=root->right;
            free(temp);

        }
        else if(root->right==NULL){
            struct node * temp=root;
            root=root->left;

            free(temp);

        }

        //case 3: two children
        else{
            struct node *temp=findmin(root->right);
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
        }
    }
    return root;
}

struct node *findmin(struct node *root) {
    while(root->left != NULL)
        root = root->left;
    return root;
}




