//9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>
void binary(int);
void binary(int n)
{
    if(n>0)
    {
        binary(n/8);
        printf("%d",n%8);
    }
}
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    binary(num);
    return 0;
}

