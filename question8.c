//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int n)
{
    if((n==0) || (n==1))
    return n;
    return(fib(n-1)+fib(n-2));
}
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf(" %d ",fib(i));
    }
    return 0;
}