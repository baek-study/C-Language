/*
   ���ϸ�: subControl.c
   ��  ��: ���ѷ���, �������(break, continue), �ݺ���(do ~ while) 
   ��  ��:
*/

//��ó����
# include<stdio.h>

// ������� - break 
void doExam1()
{
	//1. ���� ���� - ���� num
	int num;
	//2. ���ѷ���
	while(1)
	{	
	    //3. �Է� �޽��� ��� - ���ڸ� �Է��Ͻÿ�( 0 �Է½� ����) 
		printf("���ڸ� �Է��Ͻÿ�( 0 �Է½� ����) : ");
	    //4. �Է� - num
		scanf("%d", &num);
	    //5. num �� ��� - �Էµ� ���ڴ� * �Դϴ�.  
	    printf("�Էµ� ���ڴ� %d �Դϴ�.\n", num);
	    
	    //6. ���ǹ� - num�� 0 �̸� ���� Ż��
		if(num == 0)
			break; 
	}
} 

//������� - break 
void doExam2()
{
	//0. ��ȣ������� -  SEED_MONEY  10000  - const
	const int SEED_MONEY = 10000; 
	//1. ���� �ʱ�ȭ - ���� year = 0, money = SEED_MONEY 
	int year = 0;
	int money = SEED_MONEY;
	
	//2. ���� ����
	while(1)
	{
		//3. ���� ��� - year�� 1 ����, money�� 30% 
		year++; 
		money += money*0.3;
		
		printf("%d�⿡�� ������ %d �� �Դϴ�.\n", year, money);
			 
		//4. ���ǹ� - money�� 10*SEED_MONEY �̻� �̸� ���� Ż��
		if(money > 10*SEED_MONEY )
			break;
	}
	
	//5. ��� - year 
	printf("10�谡 �Ƿ��� %d ���� �ɸ��ϴ� \n", year);
	
}
 
// ������� - continue 
void doExam3()
{
	//1. ���� ���� - ����, i
	int i; 
	//2. ���� �ʱ�ȭ - ���� sum = 0 
	int sum = 0;
	//3. �ݺ��� i : 0~10���� �ϳ��� ����
	for(i=0; i<=10; i++ )
	{
		//4. ���ǹ� - i�� ¦�� �̸�  - ���� �ݺ�����
		if( i%2 == 0)
			continue;	
		//5. i���� sum�� ���� - Ȧ�� �� ��� ����
		sum += i; //sum = sum + i;
	}
	//6. sum �� ���
	printf("1����1-���� Ȧ���� ���� %d �Դϴ� \n", sum);
			 
}


int main()
{
	doExam1();
	return 0;	
} 


