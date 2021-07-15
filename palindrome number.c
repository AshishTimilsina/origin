#include<stdio.h>
int main(){
//palindrome number -----5225

int num,r,sum=0,temp;
printf("Enter the number\n");
scanf("%d",&num);

temp=num;
while(num>0){
	r=num%10;
	sum=sum*10+r;
	num=num/10;
}
num=temp;
if(num==sum){
	printf("It is a palindrome number\n");
}else{
	printf("It is not a palindrome number\n");
}
	
return 0;
}
