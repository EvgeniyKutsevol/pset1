#include <stdio.h>
#include <cs50.h>

int  main(void)
{
   float value;
   do 
   {
      printf("Give me money:\n");
      value = GetFloat();
   } while (value < 0);
   
   int toCent = value *100;
   int quarter = 25, dimes = 10, nikel = 5, penni = 1;
   int coinCounter = 0; 
   
   
    while (toCent >= quarter){
       toCent = toCent - 25;
       coinCounter++;
    }
    while (toCent >= dimes){
       toCent = toCent - 10;
       coinCounter++;
    }
    while (toCent >= nikel){
       toCent = toCent - 5;
       coinCounter++;
    }
    while (toCent >= penni){
       toCent = toCent - 1;
       coinCounter++;
    }
   
   printf("%d\n", coinCounter);
}
