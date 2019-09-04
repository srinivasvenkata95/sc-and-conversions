#include<stdio.h>
int main(){
int num,rem,sum=0,base=1;
printf("Enter number\n");
scanf("%d",&num);
while(num>0)
{
	rem=num%10;
	sum=sum+rem*base;
	num=num/10;
	base=base*16;}
printf("The number is %d\n",sum);
return 0;
}
