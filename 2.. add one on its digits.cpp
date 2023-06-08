#include <stdio.h>

int main()
{
    int number, num1, revers, result = 0, tempNum;
    printf("Enter your Number = ");
    scanf("%d",&number);

    // stor the orginial Number 
    tempNum = number;
    
    // for revers the Number
    while(number != 0){
        num1 = number % 10;
        revers = (revers*10) + num1;
        number /= 10;
    }
	   
    // store the revesr number 
    number = revers;

    // for adding 1 to each digit 
    while(number != 0){
        num1 = number % 10;
        result = (result*10) + num1+1;
        number /= 10;
    }

    printf(" before adding %d is and After adding is %d ", tempNum,result);
}