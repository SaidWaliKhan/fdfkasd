#include<stdio.h>
int main()
{
	int num1,num2;
	int sum,mul,sub;
	float quo;
	printf("Enter first num :");
	scanf("%d\n",&num1);
	printf("Enter the second number :");
	scanf("%d\n",&num2);
	sum=num1+num2;
	mul=num1*num2;
	sub=num1-num2;
	quo=num1/num2;
	printf("sum = %d/n :",sum);
	printf("mul = %d/n :",mul);
	printf("sub = %d/n :",sub);
	printf("quo = %f/n :",quo);
	return 0;
	
}