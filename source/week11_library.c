/*
   ���ϸ�: week11_libarary.c
   ��  ��: ���̺귯�� - ���� �Լ�, �ð� �Լ�, ���� �Լ� �̿� 
   ��  ��: �̸� 
*/

//��ó����
#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time(NULL)
#include <math.h>    

//�Լ� ����
void doExam1();
void doExam2();
void doExam3(); 
 
//main() �Լ� 
int main()
{	
	return 0;
}
//����1) rand() �Լ� ���� 
// ������ �� ���� - ���� �߻� �Լ� + �ð� �Լ� 
void doExam1()
{
	//1. ���� ���� - ���� i
	int i; 
	//2. ������ ���� �õ� ���� - ���� �ð� �̿� 
	srand((unsigned)time(NULL));
	//3. �ݺ��� for - 0~3, ���� �߻�
	for(i=0; i<4; i++)
	{
		printf("%d ", rand()%45+1);
	} 
} 

//���� 2) ���� �Լ� �̿��� �αװ� ���ϴ� ����
void doExam2()
{
	//1. ���� ���� - �Ǽ� number, logValue	
	double number, logValue;
	//2. �Է� �޽��� & �Է�(number)
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &number); 
	//3. log �Լ� �̿�
	logValue = log(number);
	
	//4. ��� ��� 
	printf("%f�� �αװ��� %f �Դϴ� \n", number, logValue);
}

//���� 3)���� ���� �Լ� ����
void doExam3()
{
	//1. ���� ���� - result, value
	double value, result;
	//2. ���� �ʱ�ȭ : value = 1.6
	value = 1.6;
	//3. floor �Լ� �̿� - �����Լ� - ��� 1 
	result = floor(value);
	//4. ceil �Լ� �̿� - �ø��Լ� - ��� 2 
	result = ceil(value); 
	//5. fabs �Լ� �̿� - �Ǽ� ���밪 �Լ� - ��� 1.6 
	result = fabs(value);
	//6. pow �Լ� �̿� - ������ �Լ� - ��� 1000 
	result = pow(10, 3)
	//7. sqrt �Լ� �̿�  - ������ �Լ� - ��� 2 
	result = sqrt(4)
} 
