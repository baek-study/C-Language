/*
   ���ϸ�: subControl.c
   ��  ��: ���ѷ���, �������(break, continue), �ݺ���(do ~ while) 
   ��  ��: mju 
*/

//��ó����
# include<stdio.h>

// �ݺ��� - do ~ while ���� 
void doExam1()
{
	//1.���� ���� - ���� i
	int i; 
	
	//2. �ݺ���: do ~ while 
	i = 0;  
	do     
	{
		//3. �޴� ���
		printf("1-���θ����\n"); 
		printf("2-���Ͽ���\n");
		printf("3-���ϴݱ� \n");
		
		printf("�ϳ��� �����Ͻÿ� : ");
		//4. �޴� �Է� 
		scanf("%d", &i);
	}while(i<0 || i>3); // �� 
	
	printf("���õ� �޴� : %d \n", i);
	
	// ���ѷ��� ����
	while(1)
	{
		//3. �޴� ���
		printf("1-���θ����\n"); 
		printf("2-���Ͽ���\n");
		printf("3-���ϴݱ� \n");
		
		printf("�ϳ��� �����Ͻÿ� : ");
		//4. �޴� �Է� 
		scanf("%d", &i);
		
		if(i>=1 && i<=3)     
			break;	
	} 	
	
}

// �ݺ��� - while ���� 
void doExam2()
{
	//1.���� ���� - ���� i 
	int i; 
	//2. ���ǹݺ� - while

	i=0;         //2.1 �ʱⰪ  i - 0
	while(i<0)   //2.2 �ݺ�����  - 5�� 
	{	
	    //3. hello world ��� 
		printf("hello world");
	    i++;     //2.3 ���� 	 - 1�� ����
	}
}

// �ݺ��� - for ���� 
void doExam3()
{
	//1.���� ���� - ���� i
	int i;
	//2. Ƚ�� �ݺ� - for -  �ʱⰪ;�ݺ�����;���� - 0���� 5�� �ݺ� 
	for(i=0; i<5; i++ )
	{
	    //3. hello world ���
	    printf("hello world");
	}
}

int main()
{
	doExam1();
	return 0;	
} 

 
