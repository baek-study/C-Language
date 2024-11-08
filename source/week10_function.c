/*
	���ϸ� : functionExam.c
	��  �� : �Լ� ����, �Լ� ȣ��, �Ű�����(�Է�), ��ȯ��(return, ���) 
	�ۼ��� : mju 
*/

# include <stdio.h>

//�Լ� ���� - ������ ���� �Լ� ���� 
void print_stars()
{
	//1. ���� ����
	int i; 
	//2. for i = 0 ~ 30����
	for(i=0; i<30; i++)
	{
		// 3. ��� *
		printf("*");
	}
	printf("\n");
}

//�Լ� ȣ��  - ������ ���� �Լ� ȣ��  
void doExam1()
{
	print_stars();
	printf("Hello World! \n");
	print_stars();
} 

//�Լ����� - �Ű������� ��ȯ���� �ִ� �Լ� ����
int max( int x, int y)
{
	if(x>y)
		return x;
	else 
		return y;
}

// �Լ����� - �� �Ű� ������ ���� ���ؼ� �����ϴ� �Լ� ����  
int sum( int x , int y)
{
	int sumValue = x+y;
	return sumValue;
	//return x+y;
}
// �Լ����� - �� �Ű������� �޾Ƽ� �װͿ� 1�� ���ϴ� �Լ�
int increase(int x)
{
	int result;
	result = x+1;
	return result;
}
// �� �Ű������� �޾Ƽ� �װͿ� 1�� ���� �Լ� decrease
int decrease(int x)
{
	int result;
	result = x-1;
	return result;
}

//�Լ� ȣ�� - �Ű������� ��ȯ���� �ִ� �Լ��� ȣ��
void doExam2()
{
	int larger;
	
	int first, second;
	//����� �Է� -  
	printf("�������� �Է��Ͻÿ� : ");
	scanf("%d %d", &first, &second);
	
	// max ���� ���� 
	larger = max(first, second);
	printf("(%d, %d)�߿� ū���� %d �Դϴ�. \n",first ,second , larger);

	int result1, result2, result3;
	//sum  ȣ�� - result1 
	result1 = sum(first, second);
	//increase ȣ�� - result2
	result2 = increase(first);
	//decrease ȣ�� - result3 
	result3 = decrease(first);
	
	printf("(%d, %d)�� ����  %d �Դϴ�. \n",first ,second , result1);
	printf("(%d)�� 1��������  %d �Դϴ�. \n",first , result2);
	printf("(%d)�� 1���Ұ���  %d �Դϴ�. \n",first , result3);
}
 
 int main()
{
	doExam2();
	return 0;
}

