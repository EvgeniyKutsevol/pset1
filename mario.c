#include <stdio.h>
#include <cs50.h>

int main (void)

//int main(int argc, char ** argv)
{
    printf("Type a height of  pyramid, from 0 to 23:\n");
    
    int height;
    
    do {
    height = GetInt();
    }
    while (height <0 || height >23 );
    
    
    for (int i=0; i < height; i++) {
        for (int j = height-1; j> i ; j--) 
            printf("1");
         for ( int k = 0 ; k < i+2; ++k)
            printf("#");
    printf("\n");    
    }
}   


