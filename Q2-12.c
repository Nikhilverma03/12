//2. Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
void rvrsenatural(int);
void rvrsenatural(int n)
{
    if(n>0)
        {
            printf("%d ",n);
            rvrsenatural(n-1);
        }
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    rvrsenatural(num);
    return 0;
}
