#include<stdio.h>
#include<stdlib.h>
struct bstNode{
	int data;
	struct bstNode *left;
	struct bstNode *right;
};

struct bstNode* create(struct bstNode *root,int val) {
	root=(struct bstNode*)malloc(sizeof(struct bstNode));
	root->data=val;
	root->left=root->right=NULL;
	return root;
}

struct bstNode* insert(struct bstNode *root,int val) {
	if(root == NULL)
		root=create(root,val);
	else {
		if(val>root->data) {
			root->right=insert(root->right,val);
		}
		else{
			root->left=insert(root->left,val);
		}
	}
	return root;
}
			
void display(struct bstNode *root) {
	//preorder traversal
	if(root==NULL)
		return;
	printf("%d",root->data);

	display(root->left);
	display(root->right);
}
void search(struct bstNode *root,int val) {
	if(root==NULL){
		printf("Empty/Not Found!");
		return;	
	}	
	else if(val == root->data)
		printf("\nFound");
	else{
		if(val>root->data)
			search(root->right,val);
		else
			search(root->left,val);
	}
}
				
int main()
{
	int val;
	struct bstNode *root=NULL;
	scanf("%d",&val);
	while(val>0) {
		root=insert(root,val);
		scanf("%d",&val);
	}	
	printf("\nEnter Search:");
	scanf("%d",&val);
	search(root,val);
	printf("\nPrinting:");	
	display(root);
}
