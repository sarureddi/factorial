# factorial
#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
unsigned long long factorial=1;
printf("enter an integer");
scanf("%d",&n);
if(n<0)
{
printf("the given number is negative");
}
else
{
for(i=1;i<=n;++i)
{
factorial *=I;
}
printf("factorial of the given number is",n,factorial);
}
return 0;
}
