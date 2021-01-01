#include<stdio.h>
#include<conio.h>
int main()
{
    int r,c;
    for(int r=1;r<=7;r++)
    {

        for(int c=1;c<r;c++)
        {
           printf("*");
        }
        
       printf("\n"); 
    }
       

    getch();
    return 0;
    }
