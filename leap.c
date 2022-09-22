#include<stdio.h>
int main(){
int a;
printf("enter year:");
scanf("%d", &a);
int b=a%400;
int c=b%100;
int d=c%4;
if(b==0){
printf("leap year:");}
else if(c==0){printf("not leap year");}
else if(d==0){printf("leap year");}
else{printf("not leap year");}
return 0;}