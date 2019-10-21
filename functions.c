#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "food.h"

//Write a function that returns an example of your struct when run.
struct food returnStruct()
{
  srand(time(NULL));
  double cost = rand();
  struct food answer;
  strncpy(answer.name, "candy", strlen("candy"));
  // printf("This is testing, the name of the struct is %s and here is testing if there is a new line\n", answer.name);
  // answer.name = "candy";
  answer.price = cost;
  return answer;
}

//Write a function that prints out variables of your structs type in a reasonable way.
int printOut(struct food theFood)
{
  printf("The name is \"%s\" and the price is %f\n", theFood.name, theFood.price);
  return 0;
}

//Write a function that modifies values of your struct's type.
int modify(struct food victim, char *namePointer, double *pricePointer, char newName[100], double newPrice)
{
  strncpy(namePointer, newName, strlen(newName));
  *pricePointer = newPrice;
  return 0;
}
