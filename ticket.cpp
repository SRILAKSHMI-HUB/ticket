#include<stdio.h>
int main()
{
int password,seat,booked;
char user[20];
printf("TICKET BOOKING!.\n\n");
printf("enter your name:");
scanf("%s",user);
printf("\n enter this fixed password(1234)=");
scanf("%d",&password);
switch(password)
{
case 1234:
     printf("\n Welcome to ticket booking system\n");
     printf("\n Available seats = 6 \t\t Booked seat=0\n");
     printf("\n press 1 for booking..... \n press 0 for cancellation..... \n");
      printf("\n select your seat........\t====>>");

      scanf("%d",&seat);
       switch(seat)
{
case 1:
    printf("\n please elect your seat\n");
     printf("\n 1\t 2\t 3\t \n 4\t 5\t 6\t====>>");

scanf("%d",&booked);
switch(booked)
{
case 1:
    printf("\n &s,you have booked seat=1\n",user);
    printf("\n Available seat = 5 Booked seat = 1 \n");
    break;

case 2:
    printf("\n &s,you have booked seat=2\n",user);
    printf("\n Available seat = 5 Booked seat = 1 \n");
    break;

case 3:
    printf("\n &s,you have booked seat=3\n",user);
    printf("\n Available seat = 5 Booked seat = 1 \n");
    break; 

case 4:
   printf("\n &s,you have booked seat=4\n",user);
   printf("\n Available seat = 5 Booked seat = 1 \n");
   break;

case 5:
    printf("\n &s,you have booked seat=5\n",user);
    printf("\n Available seat = 5 Booked seat = 1 \n");
    break;

case 6:
    printf("\n &s,you have booked seat=6\n",user);
    printf("\n Available seat = 5 Booked seat = 1 \n");
    break;
default:
     printf("\n  Invalid seat number\n");
}



     break;
default:
     printf("\nyou want to close press any key");
}



       break;
default:
        printf("\n sorry you have entered wrong info");
}
}











