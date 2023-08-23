#include<stdio.h>
#include<conio.h>
int q[5],f=-1,r=-1;

void enqueue()
{ int x;
  printf("enter data");
  scanf("%d",&x);
  if(r==4)
  printf("overfull");
  else
    if(f==-1&&r==-1)
    { f=r=0;
     q[r]=x;
     }
     else
     {  r++;
        q[r]=x;
      }
        }
        void dequeue()
        {  if(r==-1&&f==-1)
           printf("underflow");
           else
           if(r==0&&f==0)
           {f=-1;r=-1;}
           else
           f++;
            
             }
             void display()
             {  int i;
                for(i=f;i<=r;i++)
                {  printf("%d",q[i]);
                   }
                   }
void main()
{  int ch;
   do
   {
       printf("\n 1:enque \n 2:deque \n 3:display \n");
       scanf("%d",&ch);
       switch(ch)
       {  case 1: enqueue();
                  break;
                  case 2:  dequeue();
                          break;
                          case 3: display();
                                  break;
                                  default : printf("invalid choice");
                                          }

   } while (ch!=0);
   }