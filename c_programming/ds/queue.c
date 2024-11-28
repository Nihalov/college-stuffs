#include<stdio.h>

void add();
void dis();
void del();
void search();
int q[25],front=-1,rear=-1;


	
void main()
{
	int ch,cont;
	do
	{
		printf("\n1.add\t2.Delete\t3.Search\t4.display\t5.Stop\nEnter choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				del();
				break;
			case 3:
				search();
				break;
			case 4:
				dis();
				break;
			case 5:
				return;
		}
		printf("\nDo you want to continue(0/1): ");
		scanf("%d", &cont);
	}while(cont==1);
}

void add()
{
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		printf("Enter data: ");
		scanf("%d", &q[rear]);
	}
	else
	{
		rear++;
		printf("Enter data: ");
		scanf("%d",&q[rear]);
	}
}

void del()
{
	if(front>rear || front==-1 && rear==-1)
	{
		printf("-----Queue Empty-----");
	}
	else
	{
		printf("%d is deleted",q[front]);
		front++;
	}
}

void search()
{
	if(front==-1 && rear==-1)
		printf("-----Queue Empty-----");
	else
	{
		int data,k,f=0;
		printf("Enter data to be searched: ");
		scanf("%d",&data);
		for(k=front;k<=rear;k++)
		{
			
			if(q[k]==data)
			{
				f=1;
				printf("%d found at position %d",data,k+1);
			}
		}
		if(f==0)
			printf("%d not found in the queue",data);
	}
}

void dis()
{
	if(front==-1 && rear==-1||front>rear)
		printf("-----Queue Empty-----");
	else
	{
		int k;
		for(k=front;k<=rear;k++)
		{
			printf("%d\t",q[k]);
		}
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
