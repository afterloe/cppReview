#include<stdio.h>

int main() {
	char c, C;
	c = getchar();
	C = c - 32;
	printf("input charset is %c \nlowercase is %c \n", c, C);
  return 0;
}
