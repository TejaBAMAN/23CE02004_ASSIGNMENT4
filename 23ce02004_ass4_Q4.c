#include<stdio.h>
int main(){
    int day;
    printf("enter the digit of the week :");
    scanf("%d",&day);
    //*1-monday;2-tuesday;3-wednesday;4-thursday;5-friday;6-saturday;7-sunday*//
    switch (day)
    {
    case 1:printf("\nMonday");
        break;
    case 2:printf("\nTuesday");
        break;
    case 3:printf("\nWednesday");
        break;
    case 4:printf("\nThursday");
        break;
    case 5:printf("\nFriday");
        break;
    case 6:printf("\nSaturday");
        break;
    case 7:printf("\nSunday");
        break;
    
    
    default:printf("\ninvalid day");
        break;
    }
    return 0;
}