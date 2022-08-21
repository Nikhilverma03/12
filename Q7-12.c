//7. Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
void evennatural(int);
void evennatural(int n)
{
    if(n>0)
        {
            evennatural(n-1);
            printf("Square of %d is %d \n",n,(n*n));
        }
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    evennatural(num);
    return 0;
}
