#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter a number a:");
    scanf("%d",&a);
    
    switch (a%2)
    {
    case 0:printf(" given number is even");
        break;
    
    default:printf(" given number is odd");
        break;
    }
}