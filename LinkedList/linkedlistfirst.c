#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{ int data ;
  struct node *next;
 };
 struct node *head ,*newnode , *temp ; 
  void creatLL()
{ head = 0 ;
  int choice=1 ;
  while(choice)
  {newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter data");
  scanf("%d",&newnode->data);
  newnode->next=0;
  if(head==0)
  head=temp=newnode;
  temp->next=newnode;
  temp=newnode;
  printf("do you want to continue (0,1) -> ");
  scanf("%d",&choice);
   }
}
void showdata()
{  temp=head;
   if(head==0)
   printf("list is empty");
   while(temp!=0)
 {  printf("\n%d",temp->data);
   temp=temp->next;
  }

}
void insertatbeg()
{  newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter data");
   scanf("%d",&newnode->data);
   newnode->next=head;
   head=newnode;
  }
  void insertatend()
  {  
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter data");
     scanf("%d",&newnode->data);
     newnode->next=0;
      temp=head;
      while(temp->next!=0)
      temp=temp->next;
      temp->next=newnode;
   }
   void insertatpos()
   { int pos , i=1 ;
     printf("enter position where you want to insert data");
     scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("enter data");
     scanf("%d",&newnode->data);
     temp=head;
     while(i<pos-1)
     {temp=temp->next;
     i++;
      }
     newnode->next=temp->next;
     temp->next=newnode;
     }
     void deletefrombeg()
     {  temp=head;
     head=head->next;
     free(temp);
     }
     void deletefromend()
     {  struct node *prevnode ;
        temp=head;
        while(temp->next!=0)
        {prevnode=temp;
          temp=temp->next;
         }
         prevnode->next=0;
         free(temp);
      }
      void deletefrompos()
      {  struct node *nextnode;
         int pos , i=1 ;
         printf("enter position ");
         scanf("%d",&pos);
         temp=head;
         while(i<pos-1)
        { temp=temp->next;
          i++;
         }

         nextnode=temp->next;
         temp->next=nextnode->next;
         free(nextnode);
         
         }


void main()
{ int choice ;
  while(!0)
  {  printf("\n please enter a choice \n press 1 for creat linked list \n press 2 for show data \n press 3 for Insertion at Begning \n press 4 for Insertion at End \n press 5 for Insertion at Position \n press 6 for Deletion from Begning \n press 7 for Deletion from End \n press 8 for deletion from Position \n press 9 for exit ->  ");
     scanf("%d",&choice);
     switch(choice)
     {  case 1 : creatLL();
                 break;
        case 2 : showdata();
                 break;      
        case 3 : insertatbeg();
                 break;
        case 4 : insertatend();
                 break;
        case 5 : insertatpos();
                 break;
        case 6 : deletefrombeg();
                 break;
        case 7 : deletefromend();
                 break;
        case 8 : deletefrompos();
                 break;
        case 9 : exit(0);
    
        default : printf("invalid choice");
     }
  }
}
   


  




