#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How much minutes you take a shower?\n");
    int minutes = GetInt();

    
    int bottle = minutes *  12 ;
    
    printf("%i bottles of water you spend for taking shower \n", bottle );
}