// required for using printf function
#include <stdio.h>

/*
this is the main function
program execution starts here
*/
char s[7] = "hi mum";

int main(int argc, char **argv) {

  printf("#### BASIC PRINTING ####\n");
  printf("Hello, World!\n");
  printf("12345\n\n");

  int x;
  x = 6789;

  printf("#### VARIABLES ####\n");
  printf("%s\n", s);
  printf("%d\n\n", x);

  printf("#### OPERATORS ####\n");
  int a, b, c;
  a = 10;
  b = 2;
  c = a + b;
  c++;
  printf("The sum of a + b is: %d\n", a + b);
  printf("The sum of a + b + c is: %d\n", c);
  a += b;
  printf("The sum a+=b is: %d\n\n", a);

  printf("#### LOGICAL OPERATORS ####\n");
  int w, y, z;
  w = 1;
  y = w || 0;
  z = !y;
  printf("not (1 or 0) results in: %d\n\n", z);

  // booleans in C are represented by ints: 0 for false, 1 for true
  printf("#### RELATIONAL OPERATIONS ####\n");
  int d, e, f;
  d = 1;
  e = 5;
  f = (d < 5);
  // f = (e != 5);
  printf("1 < 5 results in: %d\n\n", f);

  printf("#### IF AND ELSE STATEMENTS ####\n");
  int g;
  g = 12;
  if (g < 10) {
    printf("g is smaller than 10\n\n");
  } else if ((g >= 10) && (g < 20)) {
    printf("g is greater than 10, but smaller than 20\n\n");
  } else if (g == 20) {
    printf("g is equal to 20\n\n");
  } else {
    printf("g is greater than 10\n\n");
  }

  printf("#### SWITCH STATEMENTS ####\n");
  int h;
  h = 3;
  switch (h) {
  case 1:
    printf("h is equal to 1\n\n");
    break;
  case 2:
    printf("h is equal to 2\n\n");
    break;
  case 3:
    printf("h is equal to 3\n\n");
    break;
  default:
    printf("h is not equal to 1, 2 or 3\n\n");
  }

  printf("#### FOR LOOPS ####\n");
  // Note : break and continue statements work the same as in java
  int i;
  for (i = 0; i < 3; i++) {
    printf("i is: %d\n", i);
  }
  printf("\n");

  printf("#### WHILE LOOPS ####\n");
  int j;
  j = 0;
  while (j < 5) {
    printf("j is: %d\n", j);
    j++;
  }
  printf("\n");

  return 0; // this will be the return value of main
}
