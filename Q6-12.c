//6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
void evennatural(int);
void evennatural(int n)
{
    if(n>0)
        {
            printf("%d ",(2*n));
            evennatural(n-1);
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
