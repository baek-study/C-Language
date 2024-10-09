/*
	��  �� : �� 6 �� 
    ���ϸ� : week6_multiIf.c
    ��  �� : ��øif, ����if(if~else if~else), switch-case �� ����  
    �ۼ��� : mhc, 24-10-08
*/

#include<stdio.h>

void doExam1(); // ��ø if ���� 
void doExam2(); // ���� if  ����
void doExam3(); // switch-case�� ����  

int main() 
{
	return 0;
}

// ��ø if ���� - if �ȿ� if ����
// �ܺ� if : ������ �Է¹޾� 80 �̻����� �׷��� ������
//   if�� if   :80�̻��� ��� - 90 �̻����� �׷��� ������
//   else�� if : 80�̸��� ��� -  70�̻����� �׷��� ������ 
void doExam1() 
{
    //1.���� ����
    int score;
    
	//2.�ȳ��޽��� & �Է�
    printf("������ �Է��ϼ���: ");
    scanf("%d", &score);
    
	//3.�ܺ� if - score > 80 + ���� if
    if (score >= 80) 
	{
        if (score >= 90) 
		{	
            printf("%d�� A�Դϴ�\n", score);
        }
        else 
		{
            printf("%d�� B�Դϴ�\n", score);
        }
    }
    else 
	{
        if (score >= 70) 
		{
            printf("%d�� C�Դϴ�\n", score);
        }
        else 
		{	
            printf("%d�� D �Ǵ� F�Դϴ�\n", score);
        }
    }
}


//���� if  ���� - ���� ���α׷�
// ������ �Է¹޾� 90 �̻��̸� A, �׷��� �ʰ� 80 �̻��̸� B, �׷��� �ʰ� 70 �̻��̸� C , �׷��� �ʰ� 60 �̻��̸� D, �׷��� ������ F 
void doExam2() {
    //1.���� ����
    int score;
    
    //2.�ȳ��޽��� & �Է�
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &score);
    
    //3.���� if
    if (score >= 90) 
	{
        printf("%d�� A�����Դϴ�.\n", score);
    }
    else if (score >= 80) 
	{
        printf("%d�� B�����Դϴ�.\n", score);
    }
    else if (score >= 70) 
	{
        printf("%d�� C�����Դϴ�.\n", score);
    }
    else if (score >= 60) 
	{
	    printf("%d�� D�����Դϴ�.\n", score);
    }
    else {
        printf("%d�� F�����Դϴ�.\n", score);
    }
}

//switch case�� ����
void doExam3() 
{
    //1.���� ����
    int number = 1;
    
    //2.switch ~case
    switch (number)
    {
	    case 0:
	        printf("����\n");
	        break;
	    case 1:
	        printf("�ϳ�\n");
	        break;
	    case 2:
	        printf("��\n");
	        break;
	    default:
	        printf("����\n");
	        break;
    }
}

