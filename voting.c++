#include<stdio.h>
int main()
{
     int age;
     printf("Enter Age of Person : ");
     scanf("%d",&age);
     if(age>17)
          printf("\nPerson is Eligible for Voting");
     else
          printf("\nPerson is NOT Eligible for Voting");
     return 0;
}
