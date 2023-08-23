#include<stdio.h>
int stack[5];
int top=-1;
void push()
{  if( top==4)
   printf("overflow");
  else
  { int x;
   printf("enter data");
   scanf("%d",&x);
   top++;
   stack[top]=x;
   }
 }
 void pop()
 { if(top==-1)
   printf("underflow");
   else 
   {  int item;
      item=stack[top];
      top--;
    }
  }
   void peek()
   {  printf("%d",stack[top]);
    }
    void display()
     {  if(top==-1)
       printf("empty stack");
       else
       {  int i ;
          for(i=top;i>=0;i--)
          printf("%d",stack[i]);
        }
     }


void main()
{  int ch;
   do
   { printf("\n 1: Push \n 2: Pop \n 3: Peek \n 4:Display \n 5: Exit \n");
     scanf("%d",&ch);
     switch(ch)
     {  case 1 : push();
                 break;
        case 2 : pop();
                 break;
        case 3 : peek();
                 break;
        case 4 : display();
                 break;
        default : printf("invalid choice");
      }
       
      } while (ch!=5);
   }