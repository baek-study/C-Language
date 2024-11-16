/*
   ���ϸ�: week11_function.c 
   ��  ��: �Ű�����&�μ�, ��ȯ��&(��ȯ) ��� ���� ����  
   ��  ��: mju 
*/

//��ó����
#include <stdio.h>


//main() �Լ�  
int main()
{
	return 0;
}

//����1) �� �� �Է� �޾� �� ��  ū���� ���� �ϴ� �Լ�   
//�Լ� ���� - max - �Ű����� ���� 2��:x, y, ���� ����
//������ �Լ��̸�(�Ű�����1, �Ű�����2)
int max(int x, int y ) 
{ 
	//1. ���ǹ� - if
	if(x>y)
		return x;
	else
		return y; 
}

// min �Լ� - �� �� �Է� �޾� �� �� ���� ���� ���� �ϴ� �Լ�   
//�Լ� ���� - min - �Ű����� ���� 2��:x, y, ���� ����
//������ �Լ��̸�(�Ű�����1, �Ű�����2) 
int min(int x, int y ) 
{ 
	//1. ���ǹ� - if
	if(x>y)
		return y;
	else
		return x; 
}

 
//�Լ� ȣ�� 
void doExam1()
{
	//1. ���� ���� - ���� value
	int value;
	//2. �Լ� ȣ�� max
	value = max(10, 20);  // �μ�(������),  ���������� ��� ���� ����  
	//3. �Լ� ��� ���
	printf("(10,20)�� max ��: %d \n", value);
	
	//�Լ�ȣ�� min 
	value = min(10, 20); // �μ�(������),  ���������� ��� ���� ���� 
	printf("(10,20)�� min ��: %d \n", value);
} 

//����2) �������� �Է¹޾� �����̸� ���ϴ� �Լ�  
//�Լ� ���� - get_area - �Ű����� ���� 1�� :radius, ���� �Ǽ�(double, float)  
//�����ڷ��� �Լ��̸�(�Ű�����1)
double get_area(int radius) 
{
	//1. �������� - �Ǽ� result
	double result;
	//2. ���� ��� 3.14*radius*radius
	result = 3.14*radius*radius;
	//3. ��� ����
	return result;
 } 
 
//���� ���θ� �Է¹޾�  �簢���� ���̸� ���ϴ� �Լ� 
// �Լ� ���� -get_rect - �Ű�����  2�� ���� width height, ���� �Ǽ�
// �����ڷ��� �Լ��̸�(�Ű�����1, �Ű�����2)
double get_rect(int width, int height)
{
	return width*height; 	
} 
   
//�Լ� ȣ�� 
void doExam2()
{
	//1. ���� ���� -  �Ǽ� area 
	double area; 
	//2. �Լ� ȣ�� 
	area = get_area(10); // �μ�(������), ���������� ��� ���� ����- �Ǽ� 
	//3. �Լ� ��� ���
	printf("10�� ���� ���̴� : %.2f \n", area); 
	area = get_rect(10, 20); // �μ�(������) 2��,  ���������� ��� ���� ����- �Ǽ�
	printf("10,20�� �簢���� ���̴� : %.2f \n", area);
}
 

//����3) ����ڿ��� ������ �Է� �޾� ���� ���� 
//�Լ� ���� - get_integer - �Ű������� ����, ���� ���� 
//�����ڷ��� �Լ��̸�()
int get_integer(void)
{ 

	//1. ���� ���� - value
	int value;
	//2. �Է� �޽���(������ �Է��Ͻÿ�) & �Է�
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value); 
	//3. value ���� 
	return value;
}

//get_char :  ����ڷκ��� ���ڸ� �Է¹޾� �����ϴ� �Լ�
// �Լ� ���� - get_char -�Ű����� ����, ������ ���� 
//�����ڷ��� �Լ��̸�()
char get_char()
{
	char ch;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &ch);
	return ch; 
} 

//print_char :  �Ű�������  ���ڸ� �Է� �޾� ȭ�鿡 ��� 
//�Լ� ���� - print_char - �Ű������� ���� ch, ���� ���� 
//�����ڷ��� �Լ��̸�(�Ű�����)
void print_char(char ch)
{ 
	 printf("���� - %c \n", ch);
} 

//�Լ� ȣ��  
void doExam3()
{	
	//1.���� ���� - ���� x
	int x;
	//2. �Լ� ȣ��
	x = get_integer(); // ���������� ��� ���� ����- ���� 
	//3. �Լ� ��� ��� 
	printf("�Է¹��� ���� ���� : %d \n", x); 
	
	//1.���� ���� - ���� x
	char value;
	value = get_char(); // ���������� ��� ���� ����- ����  
	printf("�Է¹��� ���ڴ� : %c \n", value); 

	print_char('a');
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
	happyBirthday();
}

/* ��ȭ/////////////////////////////////////////
/////////////////////////////////////////////*/

//���� 5) �� ������ ���ؼ� ����� �����ϴ� �Լ�
//�Լ� ���� - add - �Ű����� ���� 2�� x, y , ���� ����
//�����ڷ��� �Լ��̸�(�Ű�����1, �Ű�����2)
int add(int x, int y)
{
	//1. ���ϱ� ��� ���� 
	//return x+y;
	int result;
	result = x+y;
	return result;
}
//�Լ� ȣ��   
void doExam5()
{
	//1.���� ���� - ���� x, y
	int x, y, value;
	//2. x, y�� get_integer �Լ� ��� 
	x = get_integer();
	y = get_integer();
    //3. add �Լ� ���
	value = add(x, y); // �μ�(������- 2��), ���� ������ ����
	 
	//4. �Լ� ��� ��� - �μ��� ����  
	printf("%d + %d = %d \n", x, y, value); 
}

//����6) ���丮�� ����� ��ȯ - 1���� n���� ���ϱ�  
//�Լ� ���� - factorial- �Ű����� ���� 1�� number, ���� ���� 
//�����ڷ��� �Լ��̸�(�Ű�����) 
int factorial(int number)
{
	//1. ���� ���� - ���� result, i  
	int result, i;
	
	result = 1;
	//2. �ݺ��� 
	for(i=1; i<= number; i++)
	{
		result = result*i;  // result *=i;
	}
	//3. ��� ����
	return result;  
}
 
 
//����6) ���丮�� ���� �̿��Ͽ� ���� ���� ��� 
//�Լ� ����- combination - �Ű����� ���� 2�� n, r, ���� ����
//�����ڷ��� �Լ��̸�(�Ű�����1, �Ű�����2)
int combination(int n, int r)
{
	//1. ���� ���� - ���� result 
	int result;	
	//2. n!/r!(n-r)!
	result = factorial(n)/(factorial(r)*factorial(n-r));
	//3. ��� ����
	return result;
}
	  
void doExam6()
{
	//1.���� ���� - ���� n, r, value
	int n, r, value;
	//2. n, r�� get_integer �Լ� ��� 
	n = get_integer();
	r = get_integer();
    //3. combination �Լ� ȣ�� 
	value = combination(n, r);
	//4. �Լ� ��� ���  - C(x, y)) 
	printf("%d C %d = %d \n", n, r, value);
}


//���� 7) ����ڰ� �Է��� ������ŭ *�� ����ϴ� �Լ�
//�Լ� ���� - �Ű����� ���� 1��, ���ϰ��� ���� 
void star(int number)
{
	int i;
	//1. �ݺ���
	for(i=0; i<number; i++)
	//2. * �� ���
		printf("*");
		
	printf("\n");
}
//�Լ� ȣ��
void doExam7()
{
	//1. ���� ���� - ���� num
	int num;
	//2. get_integer �Լ� �̿�
	num = get_integer();
	//3. �Լ� ȣ�� 	
	star(num);
} 

