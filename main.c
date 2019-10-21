#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "food.h"

//Write a main function that tests all these things.
int main()
{
  printf("going to initialize \"struct food pig\", with \"pig\" as name and 1.0 as price\n");
  struct food pig;
  strncat(pig.name, "pig", strlen("pig"));
  pig.price = 1.0;
  printf("about to print out pig struct\n");
  printOut(pig);
  printf("finished printing out pig\n\n");
  printf("going to initialize \"struct food randomCandy\", with \"candy\" as name and a random price\n");
  struct food randomCandy = returnStruct();
  printOut(randomCandy);
  printf("finished printing out randomCandy\n\n");
  printf("going to modify pig struct to have \"beef\" as name and 2.0 as price\n");
  modify(pig, &pig.name, &pig.price, "beef", 2.0);
  printf("finished modifying pig\n");
  printOut(pig);
  printf("finished printing out the new pig\n");
  return 0;
}
