#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "food.h"

//Write a main function that tests all these things.
int main()
{
  struct food pig;
  strncat(pig.name, "pig", strlen("pig"));
  pig.price = 1.0;
  printOut(pig);
  printf("The name is %s and the price is %f", pig.name, pig.price);
  struct food randomCandy = returnStruct();
  return 0;
  printf("beep boop");
  return 0;
}
