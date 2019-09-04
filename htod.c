#include<stdio.h>
int main(){
int hex=0,num,rem;
printf("Enter the number\n");
scanf("%d",&num);
while(num>0){
rem=num%16;
hex=hex+rem*10;
num=num/16;}
printf("The number is %d\n",hex);
return 0;}
