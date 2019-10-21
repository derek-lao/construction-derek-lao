#include <time.h>
#include <stdio.h>
#include <string.h>

srand(time(NULL));
struct food {char[] name; double price;};

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
  answer = strcat("the name is \"", (char *)theFood.name, strlen((char *)theFood.name));
  answer1 = strcat(answer, "and the price is ", strlen("and the price is "));
  answer2 = strcat(answer1, (char *)theFood.price, strlen((char *)theFood.price);
  printf("%s", answer2);
}

//Write a function that modifies values of your struct's type.
int modify(struct food victim, double *namePointer, double *pricePointer, char * newName, double newPrice)
{
  *namePointer = newName;
  *pricePointer = newPrice;
  return 0;
}
