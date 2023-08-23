#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{  int data ;
   struct node *next;
   };
   struct node *newnode , *top=0;
   void push()
   {  int data;
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter data");
      scanf("%d",&data);
      newnode->data=data;
      newnode->next=top;
      top=newnode;
      }
      void display()
      {  struct node *temp;
         temp=top;
         while(temp!=0)
         {  printf("%d",temp->data); 
            temp=temp->next;
            }
        }
        void pop()
        {  struct node *temp;
           temp=top;
           top=top->next;
           free(temp);
           }
           void main()
           {  int ch;
              while(ch!=4)
              { printf("\n 1 : push \n 2 : pop \n 3 : display \n");
                scanf("%d",&ch);
                switch(ch)
                {  case 1: push();
                           break;
                   case 2: pop();
                           break;
                   case 3: display();
                           break;
                   case 4: printf("exit"); 
                           break;       
                   default : printf("invalid choice");
                   }
            
              } 
              }
