/*
	���ϸ�: week7_condOperator.c
	��  ��: ���ǹ� ������ 
	�ۼ���: mju
*/

#include <stdio.h>


//���� ������  - ������ 3�� ������ -  ����? ��:���� 
void doExam1()
{
	//1.���� ���� - abs_value, max_value, x, y 

	int abs_value, max_value, min_value, x, y;
	//2. x y �� �� ���� 
	x=5; 
	y=3;

	//3. ���� ������  
	abs_value = x>0 ? x : -x ; //���밪
	max_value = x>y ? x : y ;  //�ִ밪
	min_value = x<y ? x : y;   //�ּҰ�
	
	int age = 65; 
	// age 60 ũ�� �ǹ� .. ������ �׸�  ���
	age>60 ? printf("�ǹ�\n") : printf("�׸� \n"); 
}

// Ÿ�� ��ȯ - (int), (float)
void doExam2()
{
	//1. ���� ���� 
	int i;
	float pi, sum;

	//2. ����� Ÿ�Ժ�ȯ
	i = (int)1.23;   // 1 �� �����
	pi =(float)3;    // 3.0�� �����

	//3. �ڵ����� Ÿ�Ժ�ȯ
	i  = 1.23;   // �Ǽ��� ��� 1 �� �����
	pi = 3;     // ������ ��� 3.0�� �����

	// ����/�Ǽ� = �Ǽ�
	sum = (2 + 4 + 5) / (double)3;  // 3 : ����� Ÿ�Ժ�ȯ
	sum = (2 + 4 + 5) / 3.0;        // (2+4+5) -> �Ǽ� : 
}


int main()
{
	doExam1();
	return 0;
}
