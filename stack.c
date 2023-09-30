#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int MAX=50;
   int top=-1,stack[50];
   void push();
   void pop();
   void display();
   void main()
   {
      int ch;
      while(true)
      {
         printf("menu:\n1.push\n2.pop\n3.display\n4.exit");
         printf("\n Enter your choice");
         scanf("%d",&ch);
         switch(ch)
         {
              case 1:push();
              break;
              case 2:pop();
              break;
              case 3:display();
              break;
              case 4:exit(0);
                    break;
              default:
                    printf("\n wrong choice");
         }
      }
   }
   void push()
   {
      int val;
      if(top==MAX-1)
      {
          printf("\n stack is full");
      }
    else
    {
      printf("enter elements to push");
      scanf("%d",&val);
      top=top+1;
      stack[top]=val;
    }
  }
  void pop()
  {
     if(top==-1)
     {
       printf("stack is empty");
     }
     else
     {
        printf("deleted element is %d",stack[top]);
        top=top-1;
      }
   }
   void display()
   {
       int i;
       if(top==-1)
       {
            printf("\n stack is empty");
       }
       else
       {
            printf("\n stack elements are:");
            for(i=top;i>=0;i--)
            printf("%d\n",stack[i]);
       }
    }
            
         
       
       
          
          
              

