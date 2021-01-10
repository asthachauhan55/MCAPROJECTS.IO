#include<stdio.h>
int main()

{
  int n = 1, count= 10; //Initialization of local variable
  
  while(n <= count) //While loop execution

  {
    printf("Sample while loop: %d\n" , n);
    n++;
  } 

  return 0;

}
/*
 for(n=1; n<=count; n++)
  {
    printf("Sample for loop: %d\n" , n);
    
  } 
  return 0;

}
do
{
   printf("Sample for do-while loop: %d\n" , n);
   n++;
}
 while (n<=count);
 return 0;

}
*/