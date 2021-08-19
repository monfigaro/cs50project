#include<cs50.h>
#include<stdio.h>

int main(void)
{
    // ask user how long he takes shower
    printf("Minutes:");
    int x = get_int("");
    // show result
    printf("Water: %i\n", x * 12 );

}