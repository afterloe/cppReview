/**
 * 指针操作结构体
 */ 

#include<stdio.h>

struct Student {
  int num;
	char name[20];
	float sources[3];
	float aveg;
};

int main() {
	void toString(struct Student student);
	float calculatedMean(float sources[]);
  struct Student student = {70031, "afterloe", 80.3, 88.3, 91.4};
	toString(student);
  return 0;
}

float calculatedMean(float sources[]) {
	float *number = sources;
  int leng = sizeof(number) / sizeof(float), sum;
	for (number = sources, sum = 0; number < (sources + leng); number++) {
	  sum+=*number;
	}

	return sum/leng;
}

void toString(struct Student student) {
  student.aveg = calculatedMean(student.sources);
  printf("NO.: %1d\nname: %s\nsource:%3.1f %3.1f %3.1f\naveg: %3.1f\n", 
			student.num, student.name, student.sources[0], student.sources[1], student.sources[2], student.aveg);
}
