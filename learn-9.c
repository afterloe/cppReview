/**
 *   输入5个学生的数据，然后按照平均成绩排序，最后输出成绩最高的学生和成绩最低的学生
 *   
 * create by afteloe, on 2017-10-02
 */
#include<stdio.h>
#define N 5

struct Student {
  int num;
	char name[20];
	float source[3];
	float aver;
}

int main() {
	void inputStudentInfo(struct Student * students_p);
	void sortByAver(struct Student * students_p);
	void toString(struct Student * student);

	struct Student students[N], * students_p = students, * student;
	inputStudentInfo(students_p);
	sortByAver(students_p);
	student = students;
	toString(student);
	student = students + N - 1;
	toString(student);
  return 0;
}

void inputStudentInfo(struct Student * students_p) {
  for (int i = 0; i < N; i++) {
	  printf("please input no.%d 's info", i + 1);
		scanf("%d %s %f %f %f", &* (students_p + i) -> num);
	}
}
