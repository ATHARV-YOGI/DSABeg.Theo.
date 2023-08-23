#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1;
int queue[5];
void enqueue()
{  if((rear+1)%5==front)
   printf("queue is full");
   else
   {  int x;
       printf("enter data");
      scanf("%d",&x);

       if(front==-1&&rear==-1)
      { front=rear=0;
        queue[rear]=x;
        } 
        else
        { rear++;
          queue[rear]=x;} 
      }
}
void dequeue()
{  if(front==-1&&rear==-1)
   printf("empty queue");
   else
     if(front==rear)
        front=rear=-1;
      else
      {  front=(front+1)%5;
       } 
     
 }
 void display()
 {  int i=front;
    if(front==-1&&rear==-1)
    printf("empty queue");
    else
    { while(i!=rear)
      {  printf("%d",queue[i]);
         i=(i+1)%5;
          }
         printf("%d",queue[rear]);
      }
 }
void main()
{  int ch;
   do
   {  
   printf("\n please enter a choice press \n 1:for enqueue \n 2:for dequeue \n 3: for display\n ");
   scanf("%d",&ch);
   switch(ch)
   {  case 1: enqueue();
              break;
      case 2: dequeue();
              break;
      case 3: display();
              break;
      default : printf("invalid choice");
       }
   }while(ch!=0);
}
