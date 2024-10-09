/*
	��  �� : �� 3 �� 
	���ϸ�: week3_printf.c
	��  ��: ǥ�� ��� �Լ� printf() ���� 
	�ۼ���: mju
*/

#include <stdio.h>

void doExam1(); // ����������  
void doExam2(); // �ʵ����� ���е� 
void doExam3(); // �������α׷� 

int main()
{
	return 0;
}

// ## ����Լ� - ���������� ���� ##
void doExam1()
{
	//1. ���� ����
	int sum = 10;
	int number = 10;
	double grade = 4.5;
	
	//2. ��� �Լ� �̿� - ����������  %d (����), %f(�Ǽ�) 
	printf("�μ��� �� : %d \n", sum);
	printf("%d %f\n", number, grade);
	
}

//�ʵ����� ���е� ����
void doExam2()
{
	//�ʵ��� : %�� d ���̿� ���� �ֱ�  
	printf("%d\n", 123);
	printf("%10d\n", 123);  // 10ĭ, ������ ���� 
	printf("%-10d\n", 123); // 10ĭ, ���� ����
	
	//���е� 
	printf("%f\n", 1.23456789);      // �⺻ 
	printf("%10.3f\n", 1.23456789);  // �ʵ��� 10, ���е��� 3���� 
	printf("%-10.3f\n", 1.23456789); // ����, ���� ���� 
	printf("%.3f\n", 1.23456789);    // ���е��� 3�� 
	
}

//ǥ������Լ� ����
void doExam3()
{
	//1.���� ���� 
	int x;
	int y;
	int sum, diff, mul, div; 
	
	//2. ������ �� ����- ��
	x = 20;
	y = 10;
	
	//3. ������ �� ���� - ����
	sum  = x + y; 
	diff = x - y;
	mul  = x * y;
	div  = x / y;
	
	//4. ������ �� ��� - ���� : %d 
	printf("�μ��� �� : %d\n", sum);
	printf("�μ��� �� : %d\n", diff);
	printf("�μ��� �� : %d\n", mul);
	printf("�μ��� �� : %d\n", div);
	
	printf("�μ��� �� = %d, �� = %d, �� = %d, �� = %d\n", sum, diff, mul, div);
} 

 
