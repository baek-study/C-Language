/*
   ���ϸ�: week9_for.c
   ��  ��: �ݺ��� - for ��(Ƚ���ݺ�), ��ø for ��  
   �ۼ���: mju  
*/ 

#include <stdio.h>
 
// Ƚ�� �ݺ�: for - 5�� hello ���
void doExam1()
{
	//1. ���� ���� - i - ���� 
	int i;
	
	//2. for - �ʱⰪ;�ݺ�����;���� - i - 0~4(5��) 
	for(i=0 ; i<5 ; i++)
	{
		printf("hello world!\n");   //3. ���  
	}
}

// Ƚ�� �ݺ�: for - 1~10 ���� �����
void doExam2()
{
	//1. ���� ���� - i, sum - ����
	int i, sum;
	 
	//2. ���� �ʱ�ȭ 
	sum = 0;
	
	//3. for - �ʱⰪ ; �ݺ����� ; ���� - i = 1~10���� 
	for(i=1 ; i<=10 ; i++)      //i<11
	{
		sum = sum + i;          //4. �� ���  
	 } 
	printf("���� %d\n", sum);   //5. �� ���  
}

//��ø  for ���� - * ǥ ���簢������ ���  
void doExam3()
{ 
	//1. ���� ���� - ���� i, j
	int i, j;
	 
	//2. ��ø for
	//2.1 �ܺ� for - �ʱⰪ ; �ݺ����� ; ���� - i - 0~4 
	for(i=0 ; i<5 ; i++)
	{
		//2.2 ���� for - �ʱⰪ ; �ݺ����� ; ���� - j - 0~9 
		for(j=0 ; j<10 ; j++)
		{
			printf("*");    //3. �� ���  
		}
		printf("\n");        //���� �� ���  
	} 
}

//��ø for - ������ ���  
void doExam4()
{ 
	//1. ���� ���� - ���� dan, gob
	int dan, gob;
	 
	//2. ��ø for
	//2.1 �ܺ� for - �ʱⰪ ; �ݺ����� ; ���� - dan- 2~9 ��  
	for(dan=0 ; dan<5 ; dan++)
	{
		//2.2 ���� for - �ʱⰪ ; �ݺ����� ; ���� - gob - 1~9 ��  
		for(gob=0 ; gob<10 ; gob++)
		{
			printf("%d * %d = %d \n", dan, gob, dan*gob);    //3.������ ���  
		}
		
	} 
}


 int main()
 {
 	doExam4();
 	return 0;
 }
