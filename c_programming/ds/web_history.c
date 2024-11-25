#include<stdio.h>
#include<string.h>
#define max_size 100
char st[max_size][25];
int top=-1;

void add();
void dis();
void pop();
void search();

void main()
{
  int ch,op;
 
  do
  {
    printf("\n1.Add\t2.Delete\t3.Search\t4.Display\t5.Stop\nEnter choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1:
        add();
        break;
      case 2:
        pop();
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
        printf("-----Enter valid choice!-----");
        break;
    }
    printf("\nDo yoy want to continue(0/1): ");
    scanf("%d",&op);
  }while(op==1);
  
}

void add()
{
  if(top==max_size-1)
  {
    printf("\n-----Stack Overflow!-----");
  }
  else
  {
    top++;
    printf("Enter a website to be added to history: ");
    scanf(" %s", st[top]);
    printf("---%s added to history---",st[top]);
  }
}

void dis()
{
  if(top==-1)
  {
    printf("\n-----History empty!-----");
  }
  else
  {
    printf("-----History of visited websites-----\n");
    for(int i=top;i>=0;i--)
    {
      printf("* %s\n",st[i]);
    }
  }
}

void pop()
{
  if(top==-1)
  {
    printf("\n-----History empty-----");
  }
  else
  {
    printf("\n-----%s deleted successfully-----",st[top]);
    top--;
  }
}

void search()
{
  if(top==-1)
  {
    printf("\n-----History empty-----");
  }
  else
  {
    char web[25];
    int f=0;
    printf("Enter the website to be serched in History: ");
    scanf(" %s", web);
    for(int i=top;i>=0;i--)
    {
      if(!strcmp(st[i],web))
      {
        f=1;
        printf("\n%s found in History", st[i]);
        break;
      }
    }
    if(f==0)
    {
      printf("\n%s not found in history",web);
    }
  }
}