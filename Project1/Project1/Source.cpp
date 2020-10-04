#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//รับคะแนน 4 วิชา ของนักเรียน 5 คน
	int score[5][4],pass=0  ;
	float sum,avg;
	for (int i = 0; i < 5; i++) {
		printf("Enter score of student : %d \n\n", i + 1);
		for (int j = 0; j < 4; j++) {
			printf("Subject %d : ", j + 1);
			scanf_s("%d", &score[i][j]);
		}
	}

	//คำนวณหาค่าเฉลี่ยของคะแนนในแต่ละวิชา
	for (int j = 0; j < 4; j++) {
		sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += score[i][j];
		}
		avg = sum / 5;
		printf("Average score of subject %d : %.2f\n\n", j + 1, avg);
	}

	//คำนวณคะแนนเฉลี่ยของนักเรียนแต่ละคน
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			sum = sum + score[i][j];
		}
		avg = sum / 4;
		printf("Average score of student %d : %.2f \n", i + 1, avg);

		//หาจำนวนนักเรียนที่สอบผ่าน
		if (avg >= 50) {
			pass++;
		}
	}
	printf("\n");
	printf("Total of student pass the exam : %d \n\n", pass);

	return 0;
}