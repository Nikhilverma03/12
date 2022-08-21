//4. Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
void oddnatural(int);
void oddnatural(int n)
{
    if(n>0)
        {
            printf("%d ",(2*n)-1);
            oddnatural(n-1);
        }
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    oddnatural(num);
    return 0;
}

