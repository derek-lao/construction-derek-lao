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
  struct food randomCandy = returnStruct();
  printOut(pig);
  return 0;
}
