#include<stdio.h>
void main()
{
int reverse=0,num;
scanf("%d",&num);
while (num!=0)
{
reverse = reverse * 10;
reverse = reverse + num%10;
num= num/10;
}
printf(reverse);
}
