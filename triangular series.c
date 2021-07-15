//Generating triangular up to n terms using recursive function
//0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55,
//1 2 3 4 5 6 7 8 9
#include<stdio.h>

int traingular(int num);

int main(){

int num,i,x;
printf("Enter the number:");
scanf("%d",&num);

for(i=1;i<num;i++){
   x=traingular(i);
   printf("%d\t",x);
}


return 0;
}
int i;
int traingular(int num){
	if(num<=1){
		return 1;
	}else{
		return num+traingular(num-1);


	}
}

