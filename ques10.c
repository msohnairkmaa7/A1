#include<stdio.h>
int main()
{// WAP to take date as an input in below given format and convert the date format and display the result as given below.User Input date format – “DD/MM/YYYY” (27/11/2022)Output format –“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    int d,m,y;
    printf("date in dd/mm/yyyy:");
    scanf("%d%d%d",&d,&m,&y);
    printf("day=%d, month=%d, year=%d",d,m,y);

    return 0;
}