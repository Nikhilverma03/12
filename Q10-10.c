//10. Write a recursive function to print reverse of a given number

#include<stdio.h>
int reverse(int);
int r,res=0;
int reverse(int n)
{
    if(n>0)
        {
            r=n%10;
            res=res*10+r;
            reverse(n/10);
        }
    return res;
}
int main()
{
    int result,num;
    printf("Enter any number: ");
    scanf("%d",&num);
    result=reverse(num);
    printf("%d",result);
    return 0;
}

