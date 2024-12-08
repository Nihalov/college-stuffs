#include<stdio.h>
#include<stdint.h>
#define max_size 5
char que[max_size][15];
int front=-1, rear=-1;

void enq();
void dis();
void deq();


void main()
{
  int ch;
  do
  {
    printf("\n1.Enqueue\t2.Dequeue\t3.Display\t4.Stop\nEnter choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1:
        enq();
        break;
      case 2:
        deq();
        break;
      case 3:
        dis();
        break;
      case 4:
        return;
      default:
        break;
    }
  
  }while (1);
}


void enq()
{
  if((rear+1)%max_size==front)
  {
    printf("\n-----Queue Overflow-----\n");
    return;
  }
  else if(front==-1)
    front=0;
  rear=(rear+1)%max_size;
  printf("Enter job: ");
  scanf(" %s", que[rear]);
}

void deq()
{
  if(front==-1)
    printf("\n-----Queue Underflow-----\n");
  else
  {
    char *it;
    it=que[front];
    if(front==rear)
      front=rear=-1;
    else
      front=(front+1)%max_size;
    printf("\n-----%s deleted from the queue-----\n", it);
  }
  
}

void dis()
{
  if(front==-1)
    printf("\n-----Queue Underflow-----\n");
  else
  {
    printf("\n-----Queue-----\n");
    int i=front;
    do
    {
      printf("%s\n", que[i]);
      i=(i+1)%max_size;
    }while (i != (rear + 1) % max_size);
  }
}