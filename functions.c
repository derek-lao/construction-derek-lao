#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct food
{
  char name[100];
  double price;
};

//Write a function that returns an example of your struct when run.
struct food returnStruct()
{
  srand(time(NULL));
  double cost = rand();
  struct food answer;
  strncat(answer.name, "candy", strlen("candy"));
  answer.price = cost;
  return answer;
}

//Write a function that prints out variables of your structs type in a reasonable way.
int printOut(struct food theFood)
{
  char answer[1000] = "the name is \"";
  char priceString[100];
  sprintf(priceString, "%d", theFood.price);
  int lengthOfName = strlen(theFood.name);
  int lengthOfPrice = strlen(priceString);
  strncat(answer, theFood.name, lengthOfName);
  strncat(answer, "and the price is ", strlen("and the price is "));
  strncat(answer, priceString, strlen(priceString));
  printf("%s", answer);
  return 0;
}

//Write a function that modifies values of your struct's type.
int modify(struct food victim, char *namePointer, double *pricePointer, char newName[100], double newPrice)
{
  *namePointer = newName;
  *pricePointer = newPrice;
  return 0;
}
