#include<stdio.h>
void min();
void max();
void count();
void sum();
void reverse();
void mean();
void search();

void main()
{
	int n,a[20],ch;
	char rep;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: \n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	do
	{
		printf("\n1.minimum\n2.maximum\n3.sum\n4.count\n5.reverse\n6.mean\n7.search:\n8.stop\nEnter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				min(a,n);
				break;
			case 2:
				max(a,n);
				break;
			case 3:
				sum(a,n);
				break;
			case 4:
				count(a,n);
				break;
			case 5:
				reverse(a,n);
				break;
			case 6:
				mean(a,n);
				break;
			case 7:
				search(a,n);
				break;
			case 8:
				break;
			default :
				printf("Invalid choice\n");	
		}
	}while(ch<8);
}

void min(int a[], int n)
{
		int min_value=a[0];
		for(int i=1;i<n;i++)
		{
			if (a[i]<min_value)
				min_value=a[i];
		}
		printf("minimum = %d\n",min_value);
}

void max(int a[], int n)
{
	int max_value=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max_value)
			max_value=a[i];
	}
	printf("maximum = %d\n",max_value);
}

void sum(int a[],int n)
{
	int sum_value=0;
	for(int i=0;i<n;i++)
	{
		sum_value+=a[i];
	}
	printf("sum = %d\n",sum_value);
}

void count(int a[],int n)
{
	int count=n;
	printf("count =%d\n",count);
}

void reverse(int a[],int n)
{
	printf("Reversed =");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void mean(int a[],int n)
{
	int i=0,sum=0;
	float mean_value;
	while(i<n)
	{
		sum+=a[i];
		i++;
	}
	mean_value=sum/n;
	printf("\nmean = %f\n",mean_value);
}

void search(int a[],int n)
{
	int ele,k=0;
	printf("Enter element to be searched: ");
	scanf("%d",&ele);
	for(int i=0;i<n;i++)
	{
		if(ele==a[i])
		{
			k=0;
			printf("Item found at %d\n",i+1);
			break;
		}
		else
			k=1;
	}
	if(k==1)
		printf("Item not found\n");
}







