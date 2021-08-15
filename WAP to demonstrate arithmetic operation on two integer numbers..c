/*****************************************************************************
 Name :- Haral Ashwini
Assignment No : 4
 WAP to demonstrate arithmetic operation on two integer numbers.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2,add,sub,mul,div;
    printf("enter the value of two number");
    scanf("%d%d",&num1,&num2);
    
    add = num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    
    printf("\naddtion of two number is %d",add);
    printf("\n substraction of two number is %d",sub);
    printf("\n multiplication of two number is %d",mul);
    printf("\n division of two number is %d",div);
    
    return 0;
}

/*
enter the value of two number10
20

addtion of two number is 30
 substraction of two number is -10
 multiplication of two number is 200
 division of two number is 0
*/