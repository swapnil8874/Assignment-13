//Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sumNatural(int n);
int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d",&n);
    printf("%d",sumNatural(n));
    return 0;

}
int sumNatural(int n)
{
    if(n<=1)
    return 1;
    return (n + sumNatural(n-1));
}