//C Program to Find HCF (GCD) and LCM Using Recursive Function
#include<stdio.h>
long int multiple(long int num1,long int num2); 
int main(){

int num1,num2,gcd,lcm;
printf("Enter first number:");
scanf("%d",&num1);
printf("Enter second number:");
scanf("%d",&num2);

gcd=multiple(num1,num2);
lcm=(num1 * num2)/gcd;

printf("HCF = %d\n",gcd);
printf("LCM = %d\n",lcm);


return 0;
}
long int multiple(long int num1,long int num2){
	if(num2==0){
	return num1;	                     
	}                                
	else{
		return multiple(num2,num1%num2);
	}
}
