#include<cs50.h>
#include<stdio.h>

int main(void)

{
    printf ("How much:");
    int x;
   x = (int)(get_float("") * 100 );

while (x < 0 )
{
        printf("Try again \n");
       x = get_float("How much : ");
  }

int count = 0;


while ( x >= 25 )
{
    x = x - 25;
count++;

}
while ( x >= 10 )
{
    x = x - 10;
count++;

}

while (x >= 5)
{
    x = x - 5;
    count++;

}
while (x >= 1)
{
    x = x - 1;
    count++;

}


    printf("You get %i\n", count);
}