#include<stdio.h>
int main(){
//A number can be said as a strong number when the sum of the
// factorial of the individual digits is equal to the number. For example,
// 145 is a strong number.==>145=1!+4!+5!
int num,i,r,temp,sum=0,factorial=1;

printf("Enter the number\n");
scanf("%d",&num);
temp=num;
while(num>0){
	r=num%10;
	for(i=r;i>=1;i--){
		factorial*=i;
	}
	sum=sum+factorial;
	num=num/10;
}
	
	num=temp;
	if(num==sum){
		printf("It is a strong number\n");
	}else{
		printf("It is not a strong number\n");
	}
return 0;
}
