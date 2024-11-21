/*
	���ϸ� : week12_variable.c
	��  �� : ��������, ��������, ����(static) ���� ����  
	�ۼ��� : mju 
*/
#include <stdio.h>

int main()
{
	return 0;
} 
 

// ����1. �������� ����
// ���������� ��� �ȿ� ����Ǵ� ����, �ش� �Լ��� ��� �ȿ����� ��� ����  
void doExam1()
{
 	//1. �������� - ���� i
	int i; 
	
    //2. �ݺ��� - i - 0~4����
	for(i=0; i<5; i++)
	{
       	//3.��ϳ� ���� ���� - ���� temp �ʱ�ȭ 1 
		int temp=1; 
		printf("temp = %d \n", temp);   // [���] temp = 1 
		temp++;
		//��� ������ ������ ������  
	}
}
 

//����2. ���� ���� - ���� ���� ���� (���α׷� ���� ~ ���α׷� ��)
// ���� ���� ���� - ���� global_x ���� - �ʱⰪ 123
int global_x = 123;

//2.1 �Ű�����/���� ���� sub1 �Լ�
void sub1()
{
	// ���� ���� global_x �� 456 ���� ����
	global_x = 456;
}


//2.2 �Ű�����/���� ���� sub2 �Լ� 
void sub2()
{
	//// ���� ���� global_x �� 789 ���� ����
	global_x = 789;
}


//2.3 �Լ� ȣ��
void doExam2()
{
	//1.  ��� - �������� 
	printf("%d \n", global_x); // [���] 123
	
	//2. �Լ� ȣ�� - sub1
	sub1();
	//3. ��� - ��������
	printf("sub1 ȣ�� �� %d \n", global_x); // [���] sub1 ȣ�� �� 456
	
	//4. �Լ� ȣ�� - sub2
	sub2();
	//5. ��� - ���� ����
	printf("sub2 ȣ�� ��%d \n", global_x); // [���] sub1 ȣ�� �� 789
}

//����3. �������� - # �� ��� ��� �ǳ�?
// �������� ���� - ���� gi
int gi;

//3.1 �Լ� ���� - # �� 10 �� ��� �ϴ� �Լ� 
//�Լ� �̸� printSharp �Ű����� ����, ���� ����
void printSharp()
{
	// 1. �Լ��� �ݺ��� gi - 0~9����
	for(gi = 0; gi<10; gi++)
		printf("#");
		
	printf("\n");
}

//3.2 �Լ� ȣ��
void doExam3()
{
	//1. �ݺ��� gi - 0~4 ����
	for(gi=0; gi<5; gi++)              
	{
		//2. �Լ� ȣ��
		printSharp();
	}
}

//����4. �������� - �ʱ갪 �ڵ����� 0 ������
//���� ���� ���� - ���� global_counter
int global_counter; 
void doExam4()
{
	//1. ��� - ���� ���� global_counter
	printf("%d \n", global_counter); // [���] 0
}

//����5. static(����) ���� - ������ ����(�޸� ����) �Ⱓ: ����(���α׷� ���ൿ�� ��ü) 
//5.1 �Լ� ���� 
void sub3()
{
	//1. �ڵ� ���� ���� - ���� auto_counter & �ʱ�ȭ 0
	int auto_counter =0;
	//2. ���� ���� ���� - ���� static_counter & �ʱ�ȭ 0
	static int static_counter = 0;
	
	//3. auto_counter ����
	auto_counter++;
	//4. static_counter ����
	static_counter++;
	
	//5. ��� - auto_counter
	printf("auto_counter = %d \n", auto_counter);     
	//6. ��� - static_counter
	printf("static_counter = %d \n", static_counter);
}

//5.2 �Լ� ȣ��
void doExam5()
{
	//1. ���� ���� - ���� i	
	int i;

	//2. �ݺ��� - i - 0~2 ����
	for(i=0; i<3; i++)
		//3. �Լ� ȣ�� - sub3
		sub3();					 //[���] auto_counter = 0, static_counter = 0
								 //[���] auto_counter = 0, static_counter = 1
								 //[���] auto_counter = 0, static_counter = 2
}



