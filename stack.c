#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;}**q=NULL,**r=NULL;
void enqueue(struct node **q,struct node **r,int);
void display(struct node **q);
int main(){
int choice,item;
printf("Enter number 1.enqueue 2.display\n");
scanf("%d",&choice);
while(1){
switch(choice){
case 1:
 printf("Enter number\n");
 scanf("%d",&item);
 enqueue(q,r,item);
 break;
case 2:
 display(q);
 break;}
}
return 0;}
void enqueue(struct node **q,struct node **r,int item){
struct node *temp;
temp=*q;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=item;
temp->next=NULL;
if(*r==NULL){
*q=*r=temp;}
(*r)->next=temp;
*r=temp;
}
void display(struct node **q){
struct node *temp;
temp=*q;
while(temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;}}


