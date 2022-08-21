//3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>
void oddnatural(int);
void oddnatural(int n)
{
    if(n>0)
        {
            oddnatural(n-1);
            printf("%d ",(2*n)-1);
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

