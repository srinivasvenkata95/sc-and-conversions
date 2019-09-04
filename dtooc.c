#include<stdio.h>
int main()
{
	int dec,oct=0,rem,base=1;
	printf("Enter number\n");
	scanf("%d",&dec);
	while(dec>0){
	rem=dec%8;
	oct=oct+rem*base;
	dec=dec/8;
	base=base*10;	}
	printf("The octal number is %d",oct);
	return 0;
}

