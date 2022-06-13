
#include <stdio.h>
#include<conio.h>
int main()
{ 
    // linear search FS21IF954 AYUSH TALPADE
    int a[10],n,i,f,found=0;
    printf("enter the size  of array\n");
    scanf("%d",&n);      // take size of array
     printf("enter the array elements \n");
        for (i=0;i<n;i++)
    {
       scanf("%d",&a[i]);   //take array elemnts
                        
      }                            
  printf("enter the elemet that have to search \n");
  scanf("%d",&f);
  for(i=0;i<n;i++)
  {
      if(a[i]==f)   //campare with every element in array
      {
          found=1;
          //pos=i;
          printf("%d is found at %d",f,i);
          break;
      }
  }

  if(found==0)                         
  {
      printf("%d is not found",f);
  }

  return 0;
}