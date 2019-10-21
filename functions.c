#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct food {char *name; double price;};

//Write a function that returns an example of your struct when run.
struct food returnStruct()
{
  double cost = rand();
  struct food answer;
  answer.name = "candy";
  answer.price = cost;
  return answer;
}

//Write a function that prints out variables of your structs type in a reasonable way.
int printOut(struct food theFood)
{
  char * answer;
  char priceString[100];
  sprintf(priceString, "%d", theFood.price);
  int lengthOfName = strlen(theFood.name);
  int lengthOfPrice = strlen(priceString);
  answer = strcat("the name is \"", theFood.name);
  char * answer1 = strcat(answer, "and the price is ");
  char * answer2 = strcat(answer1, priceString);
  printf("%s", answer2);
}

//Write a function that modifies values of your struct's type.
int modify(struct food victim, char *namePointer, double *pricePointer, char * newName, double newPrice)
{
  *namePointer = newName;
  *pricePointer = newPrice;
  return 0;
}
