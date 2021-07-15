#include<stdio.h>
int main(){//6=3+2+1;

//C program to check whether a number is perfect number or not
//6,28, 496, and 8,128 are some  number. 
int num,i,sum=0;
printf("Enter the number\n");
scanf("%d",&num);

for(i=1;i<=num/2;i++){
	if(num%i==0){
		sum+=i;
	}
}
if(sum==num && num>0){
	printf("It is a perfect number\n");
}else{
	printf("It is not a perfect number\n");
}

return 0;
}

