#include<stdio.h>
#include<stdlib.h>

struct ls
{
  int data;
  struct ls *next;
}*temp=NULL, *n_node, *top=0;


void push();
void dis();
void pop();
void linearSearch();

void main()
{
  int ch;
  do
  {
    printf("\n1.Push\t2.Pop\t3.Linear Search\t\t4.Display\t5.Stop\nEnter choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        linearSearch();
        break;
      case 4:
        dis();
        break;
      case 5:
        return;
      default:
        printf("Invalid choice!");
        break;
    }
  }while(1);
}

void push()
{
  n_node = (struct ls*)malloc(sizeof(struct ls));
  printf("Enter data: ");
  scanf("%d",&n_node->data);
  if(top==0)
  {
    top=n_node;
    n_node->next=NULL;
  }
  else
  {
    n_node->next=top;
    top=n_node;
  }
}

void pop()
{
  int item;
  if(top==0)
    printf("-----Stack Underflow-----");
  else
  {
    item=top->data;
    top=top->next;
    printf("%d popped",item);
  }
}

void linearSearch()
{
  if(top==0)
    printf("-----Stack Underflow-----");
  else
  {
    int it,pos=1,f=0;
    printf("Enter element to be searched: ");
    scanf("%d",&it);
    temp=top;
    while(temp!=NULL)
    {
      if(it==temp->data)
      {
        printf("-----Item found at position %d-----",pos);
        f=1;
        break;
      }
      pos++;
      temp=temp->next;
    }
    if(!f)
      printf("-----Element %d not found in the stack!-----",it);
  }
}

void dis()
{
  if(top==0)
  {
    printf("-----Stack underflow-----");
  }
  else
  {
    printf("-----Stack-----\n");
    temp=top;
    while(temp!=NULL)
    {
      printf("%d\n", temp->data);
      temp=temp->next;
    }
  }
}