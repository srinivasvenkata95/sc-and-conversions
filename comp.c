#include<stdio.h>
#define PI 3.14
int a = 10;//global value
int main(){
int b,c;
printf("Enter number b\n");
scanf("%d",&b);//scanning b value
c=(a+b)*PI;
printf("%d\n",c);
}
