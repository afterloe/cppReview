/**
 * c版本的 冒泡排序 
 * 
 */ 
#include<stdio.h>

int main() {
	int array[] = {23,34,12,32,76,34,89,223,14,12}, leng;
	leng = sizeof(array) / sizeof(int); //  sizeof(数组名) 得到这个数组占用内存的总长度  公式：  sizeof(数组名) / sizeof(数组类型);
	printf("array size is %d \n", leng);
	int *a, *b;
	for (a=array; a < (array + leng); a++) {
		for (b=array; b < a; b++) {
		  if (*a < *b) {
				*a = *a + *b; // 不使用第三个变量实现 数值换位
				*b = *a - *b;
				*a = *a - *b;
			}
		}
	}
	for (a = array; a < (array + leng); a++) {
	  printf("%d ", *a);
	}
	printf("\n");
  return 0;
}
