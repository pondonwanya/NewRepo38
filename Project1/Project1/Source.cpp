#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//�Ѻ��ṹ 4 �Ԫ� �ͧ�ѡ���¹ 5 ��
	int score[5][4],pass=0  ;
	float sum,avg;
	for (int i = 0; i < 5; i++) {
		printf("Enter score of student : %d \n\n", i + 1);
		for (int j = 0; j < 4; j++) {
			printf("Subject %d : ", j + 1);
			scanf_s("%d", &score[i][j]);
		}
	}

	//�ӹǳ�Ҥ������¢ͧ��ṹ������Ԫ�
	for (int j = 0; j < 4; j++) {
		sum = 0;
		for (int i = 0; i < 5; i++) {
			sum += score[i][j];
		}
		avg = sum / 5;
		printf("Average score of subject %d : %.2f\n\n", j + 1, avg);
	}

	//�ӹǳ��ṹ����¢ͧ�ѡ���¹���Ф�
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			sum = sum + score[i][j];
		}
		avg = sum / 4;
		printf("Average score of student %d : %.2f \n", i + 1, avg);

		//�Ҩӹǹ�ѡ���¹����ͺ��ҹ
		if (avg >= 50) {
			pass++;
		}
	}
	printf("\n");
	printf("Total of student pass the exam : %d \n\n", pass);

	return 0;
}