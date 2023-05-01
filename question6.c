//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    return (n*fact(n-1));
}