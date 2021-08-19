#include<cs50.h>
#include<stdio.h>

int main(void)

{
    printf ("Height:");
    int x = get_int("");
while(x < 0 || x >23){
        printf("You give wrong height \n");
       x = get_int("Give height : ");
  }

for (int a = 0; a < x; a++)
   {
        for (int b = 1; b <= (x+1); b++)
        {
            if (b < (x-a+1))
            {
                printf (" ");
            }
            else if (a >= (x-b))
            {
                printf ("#");
            }
        }
        printf ("\n");
    }
}