#include<stdio.h>
int main()
{
int i,j,k,n,l=1,b;
printf("Enter number\n");
scanf("%d",&n);
printf("The equivalent binary number is :");
for(i=32;i>=0;i--){
l=1<<i;
k=n&l;
if(k>0);
printf("1");
else
printf("0");
}
//k==0?0:1;
//printf("%d",k);}
return 0;
}
