#include <stdio.h>
#include <conio.h>

int main()
{
   int a,i;

   printf("Enter No : ");
   scanf("%d" , &a);

   for (i = 1; i <=a; i++)
   {
    printf("%d \t" ,i*i,i*i);
   }
   
    return 0;
}