#include<stdio.h>
int stack[5];
int top=-1;
void push()
{ int x;
  printf("enter data");
  scanf("%d",&x);
  if( top==4)
    printf("overflow");
    else{  top++;
           stack[top]=x;
           }
 }
 void pop()
 {  int item ;
    if(top==-1)
    printf("underflow");
    else
    { item=stack[top];
      top--;
      }
    }
    void peek()
    {  printf("%d",stack[top]);
     }
     void display()
     {  int i ;
        for(i=top;i>=0;i--)
        printf("%d",stack[i]);
        }
void main()
{  int ch;
   
   do
   {  printf("enter choice :\n 1 : Push \n 2 : Pop \n 3 : Peek \n 4 : Display \n 5 : Exit ");
      scanf("%d",&ch);  
      switch(ch)
      { case 1 : push();
                 break;
        case 2 : pop();
                 break;
        case 3 : peek();
                 break;
        case 4 : display();
                 break;
        default : printf("invalid choice");       
       }
    }while(ch!=0);
    
   }