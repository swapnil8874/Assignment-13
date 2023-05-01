//recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumSqu(int n);
int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d",&n);
    printf("%d",sumSqu(n));
    return 0;
}
int sumSqu(int n)
{
    if(n==1)
    return 1;
    return (n*n + sumSqu(n-1));
}