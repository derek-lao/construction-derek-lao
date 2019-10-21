struct food
{
  char name[100];
  double price;
};

//Write a function that returns an example of your struct when run.
struct food returnStruct();

//Write a function that prints out variables of your structs type in a reasonable way.
int printOut(struct food theFood);

//Write a function that modifies values of your struct's type.
int modify(struct food victim, char *namePointer, double *pricePointer, char newName[100], double newPrice);
