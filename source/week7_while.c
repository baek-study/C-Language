/*
	���ϸ�: week7_while.c
	��  ��: �ݺ��� - ���� �ݺ� - while ���� 
	�ۼ���: mju
*/
#include <stdio.h>

//while ���� - hello world 5�� ��� 
void doExam1()
{
	// ���� ���� & ������ - ���� i 
	int i=0;               // �ʱⰪ
 	
	//3. while ����       -- �ʱⰪ --  �ݺ�����(��) -- ���� 
	while(i<5)             // �ݺ�����- ���� 
	{
		printf("hello world\n");
		i++;  // i = i+1;  // ����.. 
	}
	
	// 5 ----> 0 ������.... 
	i=5;                  //1. �ʱⰪ
	while(i>0)            //2. �ݺ�����- ���� 
	{
		printf("hello world\n");
		i--;              //3. ����
	} 
}

void doExam2()
{
	//1.���� ���� - i, sum, number ���� 
	int i, sum, number;

	//2. �Է¸޽��� & �Է�
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number); 
	
	//3. while ����       -- �ʱⰪ --  �ݺ�����(��) -- ����
	i=1;                 // �ʱⰪ 
	sum = 0;  
	while(i<=number)      //�ݺ�����(����) 
	{
		sum = sum+i;
		i++;              //���� 
	} 
	//4. ��� .. number������ ���� sum �Դϴ�. 
	printf("%d������ ���� ,%d �Դϴ�. \n", number, sum);
}
	
int main()
{
	doExam2();
	return 0;
}
