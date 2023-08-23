#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{  int data;
   struct node *next;
 }*front=0,*rear=0;
 
 void enqueue()
 {  struct node *newnode=(struct node*)malloc(sizeof(struct node));
                 printf("enter data");
                 scanf("%d",&newnode->data);
                 newnode->next=0;
                 if(front==0&&rear==0)
                 front=rear=newnode;
                 else
                 rear->next=newnode;
                 rear=newnode;
                 }
                 void dequeue()
                 {  struct node *temp;
                    if(rear==0)
                    printf("empty queue");
                    else 
                    temp=front;
                    front=front->next;
                    free(temp);
                    }
                    void display()
                    {  struct node *temp;
                       temp=front;
                       while(temp!=0)
                       {  printf("%d",temp->data);
                          temp=temp->next;
                         }
                         }


void main()
{  int ch;
   do
   {
    printf("\n 1:enqueue \n 2:dequeue \n 3:display\n");
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

