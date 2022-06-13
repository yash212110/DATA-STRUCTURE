#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
// FS21IF054 AYUSH

#define size 10

int top =-1,inp_array[size];
void push();
void pop();
void show();


  int main()
  {
      int choise;
      
       while(1)
       {
         printf("\noperatins performed by stack");
         printf(" \n 1.push the elment \n2.pop the element \n3.show\n4.end");
         scanf("%d",&choise);


         switch(choise)
         {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:show();
            break;
            case 4:exit(0);
            default:printf("\n invalid choise");
         } 
       }
     }
     void push()
     {
         int x;
         if(top==size-1)
         {
             printf("\noverflow");
         }
         else{
             printf("enter element to be inserted into stack ");
             scanf("%d",&x);
             top=top+1;
             inp_array[top]=x;
             printf("element added");
         }
     }
     
     void pop()
     {
         if(top==-1)
         {
             printf("\n underflow");
         }
         else{
             printf("\n popped element :%d",inp_array[top]);
             top=top-1;
         }
     }
     void show()
     {
         if(top==1)
         {
             printf("\nunderflow");

         }
         else{
             printf("\n elements present in the stack : \n");
             for ( int i=top;i>=0;--i)
             printf("%d \n",inp_array[i]);
         }
        
     }