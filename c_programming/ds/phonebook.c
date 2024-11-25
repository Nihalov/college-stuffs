#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	char name[20];
	long int ph;
	struct node *nxt;
}*head=0,*temp,*n_node;

//fn declarations
void creation();
void dis();
void search();
void del();

void main()
{
	int ch;
	int k;
	do
	{
		printf("\n1.Add contact\n2.search\n3.Display\n4.Delete\n5.Exit\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				creation();
				break;
			case 2:
				search();
				break;
			case 3:
				dis();
				break;
			case 4:
				del();
				break;
			case 5:
				break;
			default:
				printf("Invalid choice\n");
		}
		printf("\nDo you want to continue(0/1): ");
		scanf("%d", &k);
	}while(k==1);
}

void creation(){
	temp=head;
	n_node=(struct node *)malloc(sizeof(struct node));
	printf("Enter name: ");
	scanf("%s",n_node->name);
	printf("Enter phone number: ");
	scanf("%ld",&n_node->ph);
  n_node->nxt=NULL;
	if(head==0){
		head=n_node;
		temp=n_node;
	}
	else{
		while (temp->nxt!=NULL)
		{
			temp=temp->nxt;
		}
		temp->nxt=n_node;
	}
}

void dis(){
	if(head==0)
	{
		printf("Contact list is empty\n");
		return;
	}
	temp=head;
	while(temp!=0)
	{
		printf("Name: %s\t",temp->name);
		printf("Contact: %ld\n",temp->ph);

		temp=temp->nxt;
	}

}

void search()
{
	char name[20];
	int f=0;
	temp=head;
	if(head==0)
		printf("No contacts exits\n");
	else
	{
		printf("Enter name to be searched: ");
		scanf("%s",name);
		while(temp!=0)
		{
			if(strcmp(temp->name,name)==0)
			{
				printf("\nName: %s\t",temp->name);
				printf("Contact: %ld\n",temp->ph);
				f=1;
				break;
			}
			temp=temp->nxt;
		}
		if(f==0)
			printf("Contact not found!\n");
	}
}

//del not completed
void del()
{
	char name[20];
	int f=0;
	struct node *q;
	if(head==0)
		printf("Contact list is empty");
	else
	{
		temp=head;
		q=temp;
		printf("Enter name to be deleted: ");
		scanf("%s",name);
		while(temp!=0)
		{
			if(strcmp(temp->name,name)==0)
			{
				f=1;
				if(head==temp)
				{
					head=temp->nxt;
					free(temp);
				}
				else
				{
				q->nxt=temp->nxt;
				free(temp);
				}
				break;
			}
			q=temp;
			temp=temp->nxt;
		}
		if(f==0)
			printf("Contact not found");
	}
}







