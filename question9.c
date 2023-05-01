//program in C to count the digits of a given number using recursion
#include<stdio.h>
int countDi(int n)
{
    int count=0;
    if(n>0)
    {
       count++;
       countDi(n/10);
    }
    
        return countDi(n);
    
}
int main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d",&n);
    int value = countDi(n);
    printf("%d",value);
    return 0;

}