#include<stdio.h>
#include"add.h"
#include"rev.h"
#include"rec.h"
int main(){
int a=2,b=3,sum,c,fact;
add(a,b,sum);
printf("%d\n",add(a,b,sum));
fact=rec(sum);
printf("%d\n",fact);
c=rev(fact);
printf("%d",c);

}


