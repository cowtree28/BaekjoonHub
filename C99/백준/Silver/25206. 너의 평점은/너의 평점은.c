#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calculate_course_grade(char* grade) {
	double course_grade;
	if (grade[0] == 'P')
		return -1;
	if (grade[0] == 'F')
		return 0;
	if (grade[0] == 'A')
		course_grade = 4;
	else if (grade[0] == 'B')
		course_grade = 3;
	else if (grade[0] == 'C')
		course_grade = 2;
	else if (grade[0] == 'D')
		course_grade = 1;
	if (grade[1] == '+')
		course_grade += 0.5;
	return course_grade;
}

int main() {
	char name[51], grade[3];
	double credit,major_GPA = 0,credit_sum = 0;
	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s", name, &credit, grade);
		if (calculate_course_grade(grade) != -1.0) {
			credit_sum += credit;
			major_GPA += calculate_course_grade(grade) * credit;
		}
	}
	major_GPA /= credit_sum;
	printf("%.4lf", major_GPA);
}