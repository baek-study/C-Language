/* 
	���ϸ� : week14_string.c
	��  �� : ���ڿ� ǥ��, ���ڿ� ����(�迭����), ���ڿ� �Է�/���, �����ͷ� ���ڿ� �ʱ�ȭ  
	�ۼ��� : mju
*/

// ��ó����
#include <stdio.h>
// main �Լ�
int main()
{
	return 0;
}

//////////////////////////////
// ���ڿ�  
//////////////////////////////

//���� 1. ���ڿ� ���� & �ʱ�ȭ 
void doExam1()
{
	//1. ���ڿ� - str1  " "
	char str1[6] = "hello";
	//2. ���ڿ� - str2   {    }
	char str2[6] = {'a', 'b', '\0'};
	int scores[5] = {1,2,3};
	//3. ���ڿ� - str3   "   "
	char str3[] = "the capital city of korea";
	//4. ��� - ���ڿ� str1, str2, str3 
	printf("%s %s %s \n", str1, str2, str3); 
}

//���� 2. ���ڿ� ����  
void doExam2()
{
	//1. ����(��)�� source - ũ�� 6�� - "hello"
	char source[6] = "hello";
	//2. ���ڿ� target1 - ũ�� 6��
	char target1[6] = "";
	//3. ���ڿ� target2 - ũ�� 6��
	char target2[6] ;
	
	//4. �迭 ����  source -> target1 
	int i;
	for(i=0; i<6; i++)
		target1[i] = source[i];
	//5. ���̺귯�� �Լ� strcpy : source -> target2 
	strcpy(target2, source);
	
	printf("%s %s %s \n", source, target1, target2);
}  

//���� 3. ���ڿ� �Է� 
void doExam3()
{
	//1. ���� ���� - ���ڿ� name - ũ�� 10 
	char name[20];
	//2. ���� ��� "�̸��� �Է��Ͻÿ�"
	printf("�̸��� �Է��Ͻÿ� : ");
	//3. ���� �Է� - name 
	//scanf("%s", name); 
	fgets(name, 20, stdin);
	
	//4. ���� ��� - name
	printf("%s\n", name);
}

//���� 4. ���ڿ� - ������ �̿� 
void doExam4()
{
	//1. ���ڿ� �ʱ�ȭ p - ������ �̿� 
	char *p = "helloworld";
	
	//2. ��� - p
	printf("%s \n ", p);
	//3. p �� �ٸ� ���ڿ� ���� 
	p = "welcome to C world!";
	//4. ��� - p
	printf("%s \n ", p);
	 
} 


