#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
int p=(a>b)&&(a>c);
int q=(b>c)&&(b>a);
switch (p)
{
case 1: printf(" The maximum number is : a");
    break;
case 0:
    switch (q)
    {
    case 1:printf("The maximum number is : b");
        
        break;
    case 0:printf(" c is the maximum number");    
        break;
    default:printf("all are equal");
        break;
   
    }
}
return 0;
}