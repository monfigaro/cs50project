#include <stdio.h>
#include <cs50.h>

int main(void)
  {

  int x;
do
{
   x = get_int("Heigh: ");

}
while (x<1 || x>23);

for (int i = 0; i < x; i++)
{
    for (int a = 0; a <= x ; a++ )
    { if ( a < i+1 )
     printf("#");
     else if (a > i+1 )
     printf(" ");
    }
    printf("\n");
}
}