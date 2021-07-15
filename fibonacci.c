//C Program to Print nth Term of Fibonacci Series 

#include<stdio.h>
int fib(int num);

int main(){
int num,x;
printf("Enter the number:");
scanf("%d",&num);

x=fib(num);
printf("The number is %d",x);
return 0;
}

int fib(int num){
if(num==1){
return 0;
}else if(num==2){
 
 return 1;
	
}else{
	return fib(num-1)+fib(num-2);
}
}
