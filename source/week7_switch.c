/*
	���ϸ�: week7_switch.c
	��  ��: ���ǹ� switch ���� & ���� if �� ��� ���� 
	�ۼ���: mji
*/

#include <stdio.h>

//switch~case ��  
void doExam1()
{
	//1. ���� ���� - ���� number
	int number;
	 
	//2. ���� �� ���� = 1
	number = 5;
	
	//3. switch case ��
	switch(number)
	{
		case 0:
			printf("����\n");
			break;
		case 1:
			printf("�ϳ�\n"); 
			break;
		case 2:
		case 3:	
			printf("�� ���ʰ� \n");
			break;
		default:
			printf("����\n");
			break;	
	}
}

// switch ~ case �� - �������α׷� 
void doExam2()
{
	//1. ���� ���� - ���� :,score, iscore, ���� : grade
	int score, iscore;
	char grade; 
	//2. ���� ��� score -> iscore��
	score = 100;
	iscore = score/10;    // ����/���� -> ���� 
	//3. switch ~ case��
	switch(iscore)
	{
		case 10: 
		case 9:
			grade = 'A'; //���ڴ�  ' ' ���� ����ǥ.. X " " X 
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	} 
	printf("���� %d �� %c ���� �Դϴ�.\n", score, grade);
	
} 
//switch case ���� - ���� ��¥ ����ϱ� 
void doExam3()
{
	//1. ���� ���� - ��, �� month, days - ����
	int month, days, year;
	//2. �Է¸޽��� & �Է� - ���� �Է��ϼ��� .
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d %d", &month, &year); 
	//3. switch -case 
	switch(month)
	{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days=31;
			break;
		default:
			days = 30;
			break;	
	}
	printf("%d���� %d�Ϸ� �Ǿ��ֽ��ϴ�. \n", month, days);
}

//���� ������  - ������ 3�� ������ -  ����? ��:���� 
void doExam4()
{
	//1.���� ���� - abs_value, max_value, x, y 
	//x y �� �� ���� 
	int abs_value, max_value, x, y;
	x=5; 
	y=3;
	//2. ���� ������  
	//���밪
	abs_value = x>0 ? x : -x ;
	max_value = x>y ? x : y ;
	
	int age = 65; 
	// age 60 ũ�� �ǹ� .. ������ �׸�  ���
	age>60 ? printf("�ǹ�\n") : printf("�׸� \n"); 
}

int main()
{
	doExam4();
	return 0;
}
