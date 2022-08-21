//5. Write a recursive function to print first N even natural numbers

#include<stdio.h>
void evennatural(int);
void evennatural(int n)
{
    if(n>0)
        {
            evennatural(n-1);
            printf("%d ",(2*n));
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

