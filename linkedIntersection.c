#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* next;
};

struct node* create(int val){
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
        n->data=val;
        n->next=NULL;
	return n;
}
void insert(struct node *head,struct node *t)	{
	if(head->next!=NULL)
		insert(head->next,t);
	else{
		head->next=t;
	}
}
		
struct node* findIntersection(struct node* head1, struct node* head2)
{
    // code here
    struct node *n,*head;
    int hash[10000]={0};
    int temp;
	if(head1==NULL || head2==NULL)
		return  NULL;
  while(head1!=NULL){
	temp=0;
        temp=head1->data;
        hash[temp]=1;
        head1=head1->next;
    }
	
    while(head2!=NULL){
	temp=0;
        temp=head2->data;
        if(hash[temp]==1)
        {
		
		n=create(temp);
		if(head==NULL)
			head=n;
		else
			insert(head,n);  
        }
        head2=head2->next;
    }
 	
	return head;
}
int main(){
	int n;
	struct node *head1=NULL,*head2=NULL,*t;
	printf("\nEnter 1st:");
	scanf("%d",&n);
	int i;
	while(n-- > 0){
		scanf("%d",&i);
		t=create(i);
		if(head1 == NULL)
			head1=t;
		else	
			insert(head1,t);
	}
	printf("\nEnter 2nd:");
	scanf("%d",&n);
	while(n-- > 0){
		scanf("%d",&i);
		t=create(i);
		if(head2 == NULL)
			head2=t;
		else	
			insert(head2,t);
	}
	struct node *head;
	head=findIntersection(head1,head2);
	 while(head!=NULL){
		printf(" %d ",head->data);
		head=head->next;
	}
}












