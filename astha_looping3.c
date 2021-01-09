//Execution of a loop an unknown number of times
#include<stdio.h>
int main()
{
    char a= 'y' ;
    int num;
    
    while(a == 'y')
    {
        printf("Enter a number");
        scanf("%d", &num);
        printf("square of %d is %d", num, num*num);
        printf("\n Want to enter another number y/n");
        scanf ("%c", &a);
    }
   
    return 1;
}