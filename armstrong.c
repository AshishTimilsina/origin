//Armstrong Number Program in C 
//125=1^3 + 2^3 + 5^3
#include<stdio.h>
int main(){

int num,c,r,temp,sum=0;

printf("Enter the number\n");
scanf("%d",&num);

temp=num;
while(num>0){
	r=num%10;
	c=r*r*r;
	sum=sum+c;
	num=num/10;
}
num=temp;
if(num==sum){
	printf("%d is a armstrong number\n",num);
}else{
	printf("%d is  not a armstrong number\n",num);
}

	return 0;
}
