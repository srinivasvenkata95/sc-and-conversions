#include<stdio.h>
int main(){
int num,b=0,base=1,rem;
printf("Enter number\n");
scanf("%d",&num);
while(num>0){
rem=num%10;
b=b+rem*base;
num=num/10;
base=base*2;
}
printf("The equivalent binary number is %d\n",b);
return 0;
}
