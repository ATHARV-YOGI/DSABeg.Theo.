#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{  int data;
   struct  node *next;
 }*newnode, *front=0, *rear=0;
 void enqueue()
 {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==0&&rear==0)
    front=rear=newnode;
    else
    rear->next=newnode;
    rear=newnode;
    rear->next=front;
  }
void dequeue()
{  struct node *temp ;
   temp=front;
   front=front->next;
   rear->next=front;
   free(temp);
   }
void display()
{  struct node *temp;
   temp=front;
   while(temp!=rear)
   {  printf("%d",temp->data);
      temp=temp->next;
      }
      }
void main()
{  int ch;
   do
   {
     printf("\nplease enter a choice press \n 1: for enqueue \n 2: for dequeue \n 3: for display \n");
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
                } while (ch!=0);
   }         






















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































