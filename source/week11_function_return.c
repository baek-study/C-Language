/*
   ���ϸ�: week11_function_return.c 
   ��  ��: ��ȯ��&(��ȯ) ��� ���� ���� ���� ���� 
   ��  ��: mju 
*/

#include <stdio.h>


//���� 1) ��ȯ�ڷ����� ����-int�� ��� 
// �� �� �Է� �޾� �� ��  ū���� ���� �ϴ� �Լ�   
//�Լ� ���� - max - �Ű����� ���� 2��:x, y, ���� ����
//���ϰ�: int result 
int max(int x, int y ) 
{ 
	int result;
	//����� 
	return result;
}
//��� ���� ���� : int value 
void doExam1()
{
	int value;
	value = max(10, 20);
}


//���� 2) ��ȯ�ڷ����� �Ǽ�-double�� ���
//�������� �Է¹޾� �����̸� ���ϴ� �Լ�  
//�Լ� ���� - get_area - �Ű����� ���� 1�� :radius, ���� �Ǽ�(double, float) 
//���ϰ�: double result 
double get_area(int radius) 
{
	double result;
	//�����
	return result;
} 
//��� ���� ���� : double value 
void doExam2() 
{
	int value;
	value = get_area(10);
}

//���� 3) ��ȯ�ڷ����� ����-char�� ���
//����ڷκ��� ���ڸ� �Է¹޾� �����ϴ� �Լ�
// �Լ� ���� - get_char -�Ű����� ����, ������ ����  
//���ϰ�: char result 
char get_ch() 
{
	double result;
	//�����
	return result;
} 
//��� ���� ���� : char value 
void doExam3()
{
	char value;
	value = get_ch();
}

//���� 4) ��ȯ�ڷ����� ���� ���
//"���� �����մϴ�" ȭ�鿡 ���
//�Լ� ���� - happyBirthday - �Ű����� ����, ���� ����  
//���ϰ�: ����  
void happyBirthday()
{
	//1. "Happy Birthday" ��� 
	printf("Happy Birthday \n");
}
	
// ��� ���� ���� ���� 
void doExam4()
{
	happyBirthday();
}


