/*
   ���ϸ�: week11_function_prototyping.c 
   ��  ��: �Լ� ���� ���� 
   ��  ��: mju 
*/

//��ó����
#include <stdio.h>

//�Լ����� == �Լ�����(function declaration) 

int max(int x, int y);
void doExam1() ;
double get_area(int radius); 
void doExam2();
void print_char(char ch);
void doExam3();
void happyBirthday();

//����1) �� �� �Է� �޾� �� ��  ū���� ���� �ϴ� �Լ�   
//�Լ� ���� - max - �Ű����� ���� 2��:x, y, ���� ����
//������ �Լ��̸�(�Ű�����1, �Ű�����2)
int max(int x, int y ) 
{ 
     //�����
	 return 0;   
}

//�Լ� ȣ�� 
void doExam1()
{
	//�����  
	value = max(10, 20); // �μ�(������2�� - ����) 
}
 


//����2) �������� �Է¹޾� �����̸� ���ϴ� �Լ�  
//�Լ� ���� - get_area - �Ű����� ���� 1�� :radius, ���� �Ǽ�(double, float)  
//�����ڷ��� �Լ��̸�(�Ű�����1)
double get_area(int radius) 
{
	//����� 
	return 0.1;
 } 
   
//�Լ� ȣ�� 
void doExam2()
{
	//�����  
	area = get_area(10);     // �μ�(������1�� - ����) 
}
 

//����3) �Ű�������  ���ڸ� �Է� �޾� ȭ�鿡 ��� 
//�Լ� ���� - print_char - �Ű������� ���� ch, ���� ���� 
//�����ڷ��� �Լ��̸�(�Ű�����)
void print_char(char ch)
{ 
	 printf("���� - %c \n", ch);
}

//�Լ� ȣ�� 
void doExam3()
{
	//�����  
    print_char('a');  // �μ�(������-����1�� )  
} 


//����4) "���� �����մϴ�" ȭ�鿡 ���
//�Լ� ���� - happyBirthday - �Ű����� ����, ���� ���� 
// �����ڷ��� �Լ��̸�() - ������ �������� void 
void happyBirthday()
{
	//1. "Happy Birthday" ��� 
	printf("Happy Birthday \n");
}
	
// �Լ� ȣ�� 
void doExam4()
{
	// 1. �Լ� ȣ�� 
	happyBirthday();  // �μ� (����) 
}
