#include<stdio.h>
int main(){
//Write a C program to find sum of all prime numbers between 1 to n.
 
    int n,i,count,j,sum=0;
    printf("Enter the Number\n");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        count=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==1)
            sum+=i;
                    
    }
 printf("The sum is %d",n,sum);
return 0;
}

