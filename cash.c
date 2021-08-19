#include <stdio.h>
#include <cs50.h>

int main(void)
{

  float x;
do
{
   x = get_float("Change: ");

}
    while (x<0);

    int dollars;
    dollars = x*100;

int coins = 0;

    do
    {
    dollars = dollars-25;
        coins++;
    }
    while (dollars>=25);
    do
     {
    dollars = dollars-10;
        coins++;
    }

    while (dollars>=10);
    do
     {
    dollars = dollars-5;
        coins++;
    }
    while (dollars>=5);
    do
    {
    dollars = dollars-5;
        coins++;
    }
    while (dollars>=1);


printf("Coins: %i\n", coins);
}