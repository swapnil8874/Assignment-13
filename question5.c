//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int addDigit(int n);
int main()
{
    int n;
    printf("Enter the number\n");
      scanf("%d",&n);
      printf("Sum of Digit is %d",addDigit(n));
      return 0;
      
}
int addDigit(int n)
{
    if(n==1)
    return 1;
    return (n%10+addDigit(n/10));
}