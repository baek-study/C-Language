/* 
	���ϸ� : week13_arrayFunction.c
	��  �� : �Լ��� �迭�� �����Ҷ�, �Լ� ����(�迭ǥ��, �迭ũ��), �Լ�ȣ��(�迭�̸�, �����迭ũ��) 			  
	�ۼ��� : mju
*/

// ��ó����
#include <stdio.h>

// main �Լ�
int main()
{
	return 0; 
}

//���� 1. �迭�� �Լ�
//�Լ� ���� - get_average - �Ű����� 2��: ���� array[] , ���� size - ���� ����
int get_average(int array[], int size)
{
	//1.���� ���� - ���� i, sum(0���� �ʱ�ȭ) 
	int i, sum = 0;
	
	//2.�迭�� �� ���ϱ� 
	//2.1�ݺ��� - i - 0~(size-1)���� 
	for(i=0; i<size; i++)
		//2.2 sum�� �߰�
		sum = sum+array[i];
	//2.3 �� ��� 
	printf("sum = %d \n", sum);
	
	//4. ���(sum/size)�� ���� 
	return sum/size;
}

//�Լ� ȣ�� 
void doExam1()
{
	//1. ������ �迭 scores �ʱ�ȭ - 5�� ���� - ������ �� 5�� 
	int scores[5] = {1,2,3,4,5};
	//2. ���� ���� - ���� result (��� ���� ����) 
	int result;
	
	//3. get_average �Լ� ȣ�� �� result�� ��� ���� 
	result = get_average(scores, 5);
	
}

//���� 2. �迭�� �Լ� - ���� �迭�� ���� 1 ���� 
//�Լ� ���� - modify_array - �Ű����� 2��: ���� array[] , ���� size - ���� ���� 
void modify_array(int array[], int size)
{
	//1.���� ���� - ���� i
	int i;
	
	//2.���� �迭�� �� ���� 
	//2.1�ݺ��� - i - 0~(size-1)���� 
	for(i=0; i<size; i++)
	{
		//2.2 ���� ���ҿ� + 1�� �߰�
		array[i]++;  //array[i] += 1;
	}		
}

//���� 3. �迭�� �Լ� - �迭�� ���� ��� 
//�Լ� ���� - print_array - �Ű����� 2��: ���� array[] , ���� size - ���� ���� 
void print_array(const int array[], int size)
{
	//1.���� ���� - ���� i
	int i;	
	
	//2.�迭 ��� 
	//2.1 �ݺ��� - i - 0~(size-1)���� 
	for(i=0; i<size; i++)
		//2.2 ���� ���
		printf("array[%d] = %d \n", i, array[i]); 
}


//�Լ� ȣ��
void doExam2()
{
	//1. ������ �迭 scores �ʱ�ȭ - 10�� ����
	int scores[10] = {1,2,3,4,5,6,7,8,9,10};
	
	//2. print_array ȣ��
	print_array(scores, 10);
		
	//3. modify_array ȣ�� 
	modify_array(scores, 10);
	
	//4. print_array ȣ��
	printf("modify ��================ \n");
	print_array(scores, 10);
	
} 	

//���� 4. �Լ��� �Ű������� �迭�� 2�� ( ������ �迭 1��, ������ �迭 1��) - ���� ����  
void test_array(int array1[], int size1, char array2[], int size2)
{
	
}

