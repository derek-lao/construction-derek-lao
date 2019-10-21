//Write a main function that tests all these things.
int main()
{
  srand(time(NULL));
  struct food pig;
  pig.name = "pig";
  pig.price = 1.0;
  struct food randomCandy = returnStruct();
  printf("%s", printOut(pig));
  return 0;
}
