#include <stdio.h>

int main() {
  void swap(int * p1, int * p2);
	int a,b;
	int * p1, * p2;
	printf("please input two number, better , \n");
	scanf("%d,%d", &a, &b);
	p1 = &a;
	p2 = &b;
	if (a > b) {
	  swap(p1, p2);
	}

	printf("after handler is %d - %d", a, b);
  return 0;
}

void swap(int * p1, int * p2) {
  int temp;
	temp = * p1;
	* p1 = * p2;
	* p2 = temp;
}
