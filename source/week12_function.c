/*
	���ϸ� : functionExam12.c
	��  �� : �Լ� ����, �Լ� ȣ��, ���̺귯�� ���� 
	�ۼ��� : �̸� 
*/

// ��ó����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// main �Լ�
int main()
{
	doQuest1();
	return 0;
}

/* �Լ� ����///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////*/


//����1.  �� �� �Է� �޾� �� ��  ū���� ���� �ϴ� �Լ�   
//�Լ� ���� - max - �Ű����� ���� 2��:x, y, ������ ����
//������ �Լ��̸�(�Ű�����1, �Ű�����2)
int max(int x, int y)
{
	int result;
	//�����. 
	return result; 
}

 
//�Լ� ȣ�� - max �Լ� 
void doExam1()
{
	int value;
	value = max(10, 20);
} 


//����2.1 �������� �Է¹޾� �����̸� ���ϴ� �Լ�  
//�Լ� ���� - get_area - �Ű����� ���� 1�� :radius, ������ �Ǽ�(double, float)  
//�����ڷ��� �Լ��̸�(�Ű�����1)
double get_area(int radius)
{
	double result;
	//�����
	return result;	
}
 
//����2.2 ���� ���θ� �Է¹޾�  �簢���� ���̸� ���ϴ� �Լ� 
// �Լ� ���� -get_rect - �Ű�����  2�� ���� width height, ������ �Ǽ�
// �����ڷ��� �Լ��̸�(�Ű�����1, �Ű�����2)
double get_rect(int width, int height)
{
	double result;
	//����� 
	return result;
}

   
//�Լ� ȣ�� - get_area �Լ�, get_rect �Լ�
void doExam2()
{
	double value1, value2;
	value1 = get_area(10);
	value2 = get_rect(10, 20);

}
 

//����3.1 ����ڿ��� ������ �Է� �޾� ���� ���� 
//�Լ� ���� - get_integer - �Ű������� ����, ������ ���� 
//�����ڷ��� �Լ��̸�()
int get_integer( )
{
	int result;
	//�����
	return result;
}


//���� 3.2  ����ڷκ��� ���ڸ� �Է¹޾� �����ϴ� �Լ�
// �Լ� ���� - get_char -�Ű����� ����, ������ ���� 
//�����ڷ��� �Լ��̸�()
char get_char()
{
	char result;
	//�����
	return result; 
}

//���� 3.3  �Ű������� ���� ���ڸ� ȭ�鿡 ��� 
//�Լ� ���� - print_char - �Ű������� ���� ch, ���� ���� 
//�����ڷ��� �Լ��̸�(�Ű�����)
void print_char(char ch)
{
	//�����
}

//�Լ� ȣ��  - get_integer �Լ�, get_char �Լ�, print_char �Լ� 
void doExam3()
{	
	int value1;
	char value2;
	
	value1 = get_integer();
	value2 = get_char();
	
	print_char('a');

}

//����4. "���� �����մϴ�" ȭ�鿡 ���
//�Լ� ���� - happyBirthday - �Ű����� ����, ���� ���� 
// �����ڷ��� �Լ��̸�() - ������ �������� void 
void happyBirthday()
{
	//�����
}
	
// �Լ� ȣ�� 
void doExam4()
{
	// 1. �Լ� ȣ�� 
	happyBirthday();
}



//����5. rand() �Լ� ���� 
// ������ �� ���� - ���� �߻� �Լ� + �ð� �Լ� 
void doExam5()
{
	//1. ���� ���� - ���� i
 	int i;
	//2. ������ ���� �õ� ���� - ���� �ð� �̿� 
	srand(time(NULL));
	//3. �ݺ��� for - 0~3, ���� �߻�(1~45����)
	for(i=0; i<4; i++)
	{
		//4. ���� ���	
		printf("%d ", rand()%45+1);
	} 
} 

//����6. ���� ���� �Լ� ����
void doExam6()
{
	//1. ���� ���� - �Ǽ� result, value
	double result, value;
	//2. ���� �ʱ�ȭ : value �� 1.6
	value = 1.6;
	//3. log �Լ� �̿� - value 
	result = log(value);
	//4. floor �Լ� �̿� - �����Լ� value - ��� 1 
	result = floor(value);
	//5. ceil �Լ� �̿� - �ø��Լ� value - ��� 2
	result = ceil(value);
	//6. fabs �Լ� �̿� - �Ǽ� ���밪 �Լ� - ��� 1.6 
	result = fabs(value);
	//7. pow �Լ� �̿� - ������ �Լ� 10�� 3 ��- ��� 1000 
	result = pow(10,3);
	//8. sqrt �Լ� �̿�  - ������ �Լ� 4�� ������  - ��� 2 
	result = sqrt(64);
	
	double result1, result2, result3;
	int angle = 90;
	double radian = 3.14*angle/180;
	//9. �ﰢ �Լ�(sin, cos, tan) �̿�   
	result1 = sin(radian); 
	result2 = cos(radian);
	result3 = tan(radian);

	printf("sin �� %f, cos �� %f, tan �� %f \n", result1, result2, result3);
} 



/* �ǽ����� ///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
*/

// �ǽ�����1 - ����ڰ� �Է��� ������ŭ ��*���� ����ϴ� �ڵ带 �ۼ�
//1.1 �Լ� ���� - ����ڿ��� ������ �Է� �޾� ����
//�Լ� �̸� get_number - �Ű������� ����, ������ ����
int get_number()
{
	int number;
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &number); 
	
	return number;
} 

//1.2 �Լ� ȣ�� - get_number
void doQuest1()
{
	int i;
	// �Լ� ȣ��
	int value = get_number();
	
	 
	//�ݺ��� - i 0 ~ value-1 ����,    
	for(i=0; i<value; i++)
		printf("*");
}

