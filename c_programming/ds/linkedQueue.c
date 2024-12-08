#include<stdio.h>
#include<stdlib.h>

struct queue{
	int data;
	struct queue *nxt;
}*temp=NULL, *n_node, *front=NULL, *rear=NULL;

void enqueue();
void dis();
void dequeue();
void search();

void main()
{
	int ch;
	do
	{
		printf("\n1.Enqueue\t2.Dequeue\t3.Search\t4.Display\t5.Stop\nEnter choice: ");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				search();
				break;
			case 4:
				dis();
				break;
			case 5:
				return;
			default:
				break;
		}
	} while (ch<=5);
	
	
}

void enqueue()
{
	n_node=(struct queue*)malloc(sizeof(struct queue));
	printf("Enter data: ");
	scanf("%d",&n_node->data);
	if(front==NULL && rear==NULL)
	{
		front=rear=n_node;
	}
	else
	{
		rear->nxt=n_node;
		rear=n_node;
	}
}

void dequeue()
{
	if(front==NULL)
		printf("-----Queue Underflow-----");
	else
	{
		int it;
		it=front->data;
		front=front->nxt;
		if(front==NULL)
			rear=NULL;
		printf("-----%d dequeued from Queue-----",it);
	}
}

void search()
{
	if(front==NULL)
		printf("-----Queue Underflow-----");
	else
	{
		int it,f=0;
		printf("Enter item to searched: ");
		scanf("%d", &it);
		temp=front;
		while (temp!=NULL)
		{
			if(it==temp->data)
			{
				f=1;
				printf("-----Item found-----");
				break;
			}
			temp=temp->nxt;
		}
		if(f==0)
			printf("-----Item not found-----");
	}
}

void dis()
{
	temp=front;
	printf("-----Queue-----\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->nxt;
	}
}