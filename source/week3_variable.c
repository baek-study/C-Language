/* 
	��  �� : �� 3 �� 
	���ϸ� : week3_variable.c  
	��  �� : ������ ����, ���� ����, �ʱ�ȭ ����
	�ۼ��� : mju
*/

#include <stdio.h> 

void doExam1(); // ���� ���� ����
void doExam2(); // ���� �� ����
void doExam3(); // ���� �ʱ�ȭ 
void doExam4(); // ���� �� ����
 
int main()
{
	return 0;
}

//���� ���� ����
void doExam1()
{ 
	//1. ���� ���� : �ڷ��� �����̸�;
	// ������ ���� number
	int number ; 
	// ������ ���� ch
	char ch;
	// �Ǽ��� ���� interest_rate
	double interest_rate; 
	
	//2���� ���ÿ� ����
	int height, width; 
}

//������ ���� ����
void doExam2()
{
	//1. ���� ���� 
	char ch;
	int i;
	double interest_rate;
	
	//2. ������ �� ����(����) 
	ch = 'A';  //�����϶� ��������ǥ�� �� ���
	i = 60;
	interest_rate = 4.9;
	
	//3. ��� - ���������� : %c (����) %d (����) %f(�Ǽ�) 
	printf("ch = %c, i = %d, interest_rate = %f \n", ch, i, interest_rate);
}

//���� �ʱ�ȭ = ����� ���ÿ� ���� ����
void doExam3()
{
	//1. ���� ���� + �� ����  
	char ch = 'a';
	int i = 60;
	double interest_rate = 4.9;
}

//���� �� ����
void doExam4()
{ 
	//1. ���� ���� 
	int value1 = 20;
	int value2;
	
	//2. ���� �� ����  
	value2 = value1;
	value2 = 30; 
	
	value1 = 30; 
} 
 
 
