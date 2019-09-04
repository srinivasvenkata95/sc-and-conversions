#include<stdio.h>
int main()
{
	char a=10;
	char  b=9;
	int *ptr;
	ptr=&a;
	ptr=&b;
	printf("%d",*ptr);
	return 0;
}
 
