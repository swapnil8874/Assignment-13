//program in C to calculate the power of any number using recursion
#include<stdio.h>
int power(int base,int a)
{
    if(a!=0)
    return (base*power(base,(a-1)));
    else
     return 1;
}
int main()
{
    int base,a,result;
    printf("Enter Base Number\n");
    scanf("%d",&base);
    printf("Enetr Power Number\n");
    scanf("%d",&a);
    result=power(base,a);
    printf("%d",result);
    return 0;
}