#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left,*right;
};

struct node*  create(int val)	{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node*));
	t->data=val;
	t->left=NULL;
	t->right =NULL;
	return t;
}	
void  insert(struct node *root,struct node *temp)	{
	if (root->data > temp->data){
		if(root->left !=NULL)
			insert(root->left,temp);	
		else
			root->left=temp;
	}
	else	{
		  if(root->right !=NULL)
                        insert(root->right,temp);
    	          else
                        root->right=temp;
        }
	return;	
}	
void preorder(struct node *t)	{
	if(t==NULL)	
		return;	
	else{
		printf("%d",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
int array[100];
int i=0;
void store(struct node *root)	{
	
	if(root==NULL) return;
	else	{
		array[i++]=root->data;
		store(root->left);
		store(root->right);
	}
	
}
void sort(){
	int a,b;
	for(a=0;a<i;a++){
		for(b=0;b<i-a;b++){
			if(array[b]>array[b+1]){
				array[b]=array[b]+array[b-1];
				array[b+1]=array[b]-array[b+1];
				array[b]=array[b]-array[b+1];
			}
		}
	}
	for(a=0;a<i;a++)
		printf("\n%d",array[a]);
}
int search(struct node *root,int k)	{
	if(root == NULL)
		return 0;
	store(root);
	sort();
	int a=0,b=i;
	while(a<b){
		if(array[a]+array[b]==k)
			return 1;
		if(array[a]+array[b]<k)
			a++;
		else if(array[a]+array[b] > k)
			b--;
			
	}
	return 0;
}

	
int main() {
	int i=0;
	struct node *root=NULL,*temp;
	while(1){
		scanf("%d",&i);	
		if(i <0) break;		
		temp=create(i);
		if(root==NULL)
			root=temp;
		else
			insert(root,temp);
	}
	preorder(root);
	printf("\nEnter Search:");
	scanf("%d",&i);
	printf("\n %d",search(root,i));
}
