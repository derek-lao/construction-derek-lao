#include <time.h>
#include <stdio.h>
#include <stdlib.h>

struct food {char * name; double price;};

//Write a function that returns an example of your struct when run.
struct food returnStruct()
{
  srand(time(NULL));
  double cost = rand();
  struct food answer;
  answer.name = "candy";
  answer.price = cost;
  return answer;
}

//Write a function that prints out variables of your structs type in a reasonable way.
char * printOut(struct food theFood)
{
  char * answer;
  answer = "the name is \"" + theFood.name + "\" and the price is " + theFood.price;
  return answer;
}

//Write a function that modifies values of your struct's type.
int modify(struct food victim, double namePointer, double pricePointer, char * newName, double newPrice)
{
  *namePointer = newName;
  *pricePointer = newPrice;
  return 0;
}
