//merge two sorted arrays
#include<stdio.h>
void main()
{
	int n1,n2,a[20],b[20],res[40]={0},i=0,j=0,r=0;
	printf("Enter size of first array: ");
	scanf("%d",&n1);
	printf("Enter first array: \n");
	for(int k=0;k<n1;k++)
		scanf("%d",&a[k]);


	printf("Enter size of second array: ");
	scanf("%d",&n2);
	printf("Enter second array: \n");
	for(int k=0;k<n2;k++)
		scanf("%d",&b[k]);


	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			res[r]=a[i];
			i++;
		}
		else
		{
			res[r]=b[j];
			j++;
		}
    r++;
	}
	while(i<n1)
	{
		res[r]=a[i];
		r++;
		i++;
	}
	while(j<n2)
	{
		res[r]=b[j];
		r++;
		j++;
	}
	printf("Resultant array: \t");
	for(int k=0;k<n1+n2;k++)
	{
		printf("%d\t", res[k]);
	}
}