//Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int a=400,b=200;
    int result= hcf(b,a%b);
    printf("%d",result);
    return 0;
}
int hcf(int a,int b)
{
    if(b==0)
    return a;
    return hcf(b,a%b);
    
}