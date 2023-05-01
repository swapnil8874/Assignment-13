//recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumodd(int n);
int main()
{
    int n;
    printf("Enter The value\n");
    scanf("%d",&n);
    printf("%d",sumodd(n));
    return 0;
    
}
int sumodd(int n)
{
    if(n==1)
    return 1;
    return (2*n-1 + sumodd(n-1));
}