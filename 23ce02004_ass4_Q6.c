#include<stdio.h>
int main(){
    char a;
    float num1,num2;
    printf("enter the operator");//operators are +,-,*,/ //
    scanf("%c",&a);

    printf("enter two numbers");
    scanf("%f,%f",&num1,&num2);

float sum,difference,product,quotient;
sum=num1+num2;difference=num1-num2;product=num1*num2;quotient=num1/num2;
    switch (a)
    {
    case '+': printf("sum is %.0f",sum);
        break;
     case '-': printf("difference is %.0f",difference);
        break;
     case '*': printf("product is %.0f",product);
        break;
     case '/': printf("quotient is %.0f",quotient);
        break;
    
    default:printf("invalid operation");
        break;
    }
    return 0;
    }