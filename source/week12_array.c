/* 
	���ϸ� : week12_array.c
	��  �� : �迭 ����, �迭 ���� ����(�ε���), �迭 �� ����, �迭 �ʱ�ȭ ���� 
	�ۼ��� : mju
*/

// ��ó����
#include <stdio.h>
// main �Լ�
int main()
{
	return 0;
}

//1. �迭 ���� ����
void doExam1()
{
	//1. ������ �迭 score - 60�� ���� 
	int score[60];
	//2. �Ǽ��� �迭 cost - 12�� ����
	double cost[12];
	//3. ������ �迭 name - 50�� ����
	char name[50];
}

//2. �迭�� ��� ���� �� ���� ����
void doExam2()
{
	//1. ������ �迭 score - 60�� ���� 
	int score[60];
	//2. �� ���� score 0, 1, 2, �� 10, 20, 30 �� �ֱ�
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[59] = 100;
	//3. �� ��� score 0, 1, 2	
	printf("%d, %d, %d, %d\n", score[0], score[1], score[2], score[59]);
	
	
	//4. �Ǽ��� �迭 cost - 12�� ����	
	double cost[12];
	//5. �� ���� cost 0, 1, 2�� 0.2, 1.3, 5.6 �� �ֱ�
	cost[0] = 0.2;
	cost[1] = 1.3;
	cost[2] = 5.6;
	cost[11] = 9.9;
	//6. �� ��� cost 0, 1, 2
	printf("%f, %f, %f, %f\n", cost[0], cost[1], cost[2], cost[11]);
	
		
	//7. ������ �迭 name - 50�� ����
	char name[50];
	//8 �� ���� name 0, 1, 2�� 'a', 'b', 'c' �� �ֱ�
	name[0] = 'a';
	name[1] = 'b';
	name[2] = 'c';
	name[49] = 'z';
	//9 �� ��� name 0, 1, 2
	printf("%c, %c, %c, %c\n", name[0], name[1], name[2], name[49]);
} 

//����3. �迭�� �ʱ�ȭ  + �迭�� �ݺ�
void doExam3()
{
	//1. ������ �迭 score1- 5 ���� - 10, 20, 30, 40, 50 ���� �ʱ�ȭ
	int score1[5] ={10,20,30,40,50};
	//2. ������ �迭 score2- 5 ���� - 10, 20, 30 ���� �ʱ�ȭ
	int score2[5] ={10,20,30};
	//3. ������ �迭 score3- ����ǥ�þ��� - 10, 20, 30, 40, 50 ���� �ʱ�ȭ
	int score3[] ={10,20,30,40,50};
	
	//4. ��� - score1 ���   [���] 10, 20, 30, 40, 50 
	printf("%d, %d, %d, %d, %d\n", score1[0], score1[1], score1[2], score1[3], score1[4]);
	//5. ��� - score2 ���   [���] 10, 20, 30, 0, 0
	printf("%d, %d, %d, %d, %d\n", score2[0], score2[1], score2[2], score2[3], score2[4]);
	//6. ��� - score3 ���   [���] 10, 20, 30, 40, 50 
	printf("%d, %d, %d, %d, %d\n", score3[0], score3[1], score3[2], score3[3], score3[4]);
	
	//�ݺ� ����
	//7. ���� ���� - ���� i
	int i; 
	
	//8. �ݺ��� - i - 0~4���� score1 �� ���
	for(i=0; i<5; i++)
		printf("%d ", score1[i]);
		
	//9. �ݺ��� - i - 0~4���� score2 �� ���
	for(i=0; i<5; i++)
		printf("%d ", score2[i]);
		
	//10. �ݺ��� - i - 0~4���� score3 �� ���
	for(i=0; i<5; i++)
		printf("%d ", score3[i]);
}






