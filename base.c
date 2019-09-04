#include<stdio.h>
#include<string.h>
int count=0;
char n[40];
char *radix_convert(int,int);
int main(){
char *num;
int i,dec,d,base;
printf("Enter the number\n");
scanf("%d",&dec);
printf("Enter base\n");
scanf("%d",&base);
num=radix_convert(dec,base);
d=strlen(num);
for(i=d-1;i>=0;i--)
printf("The converted number is %c\n",num[i]);
}
char *radix_convert(int dec,int base){
int rem,i,d;
while(dec!=0){
rem=dec%base;
d='0'+rem;
if(d>'9'){
d=d+7;}
n[count++]=d;
dec=dec/base;}
return n;}
