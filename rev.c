#include<stdio.h>
int rev(int fact){
int rem,rev=0;
while(fact!=0){
rem=fact%10;
rev=rev*10+rem;
fact=fact/10;}
return rev;}

