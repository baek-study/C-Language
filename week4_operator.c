/*
	��  �� : �� 4 �� 
    ���ϸ� : week4_operator.c
    ��  �� : ���, ���������, ����������, ���մ��� ������  ����
    �ۼ��� : mju
*/

#include<stdio.h>

//���  - define ��ó�� �̿� 
#define TAX_RATE 0.2

void doExam1(); // ��� ����  
void doExam2(); // ��� ���� ���� 
void doExam3(); // ��� ������ ���� 
void doExam4(); // ���������� ���� 
void doExam5(); // ���մ��Կ����� ���� 

int main() 
{
	return 0;
}

// ��� ����
void doExam1() 
{
	//1. ��ȣ ��� ���� - const Ű���� �̿� 
	const int MONTHS = 12;
	
	//2. ���� ���� - ���� m_salary, y_salary
	int m_salary, y_salary;
	
	//3. �Է� �޽��� ���
	printf("������ �Է��Ͻÿ� : ");
	
	//4. �Է�  m_salary
	scanf("%d", &m_salary);
	
	//5. ��� - y_salary
	y_salary = m_salary * MONTHS;
	
	//6. ��� 
	printf("������ %d ��, ������ %lf ���Դϴ�.\n", y_salary, y_salary * TAX_RATE);
}

//��� ����(+,-,*,/) ���� -  �Ǽ� �̿� 
void doExam2() 
{
	//1. ���� ���� - double x, y, result
	double x, y, result;
	
	//2. �Է� �ȳ��޽��� ���
	printf("�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	
	//3. �Է� - x, y
	scanf("%lf %lf", &x, &y);
	
	//4. + ������ ���� �� result�� �Ҵ�
	result = x + y;
	//5. result ���
	printf("%lf + %lf = %lf\n",x, y, result);

	result = x - y;
	printf("%lf - %lf = %lf\n", x, y, result);

	result = x * y;
	printf("%lf * %lf = %lf\n", x, y, result);

	result = x / y;
	printf("%lf / %lf = %lf\n", x, y, result);
}

//��(/), ������(%) ����
// �ʸ� �Է¹޾� ��/�ʷ� ������ ��
void doExam3() 
{
	//1. ��ȣ��� ���� 60 SEC_PER_MINUTE
	const int SEC_PER_MINUTE = 60;

	//2. ���� ���� - ���� ��(minute), ��(second), totalSec(��ü����)
	int minute, second, totalSec;

	//3. �Է� �ȳ��޽��� ���
	printf("�ʸ� �Է��Ͻÿ� : ");

	//4. �Է�
	scanf("%d", &totalSec);

	//5. ��� - ��, �� ���
	minute = totalSec / SEC_PER_MINUTE; //��
	second = totalSec % SEC_PER_MINUTE; //������
	
	//6. ��� - ��, ��
	printf("%d�ʴ� %d�� %d���Դϴ�\n", totalSec, minute, second);
}

// ����������(++, --) ����  
void doExam4()
{
    //1. ���� ����
    int x;
    
	x = 10;
	//2. �������������� ���� 
    y = x++; //x���� y�� ������ �� x�� ����
    printf("x=%d, y=%d\n", x, y);

    x = 10;    
    //3. ���� ���� ������ ���� 
    y = ++x; //x���� ������Ų �� y�� ����
    printf("x=%d, y=%d\n", x, y);
} 

// ���մ��Կ�����(+=, -=, *=�� ) ����  
void doExam5()
{
	//1. ���� ����
    int x;
	 
	x = 10;

	//2. ���մ��Կ����� ����  
    x += 3; //x = x + 3
    x *= 3; //x = x * 3
    x /= 3; //x = x / 3
    x %= 3; //x = x % 3
    x -= 3; //x = x - 3	 
}
