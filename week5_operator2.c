/*
	��  �� : �� 5 �� 
    ���ϸ� : week5_operator.c
    ��  �� : ���迬����, ���� ������ ����  
    �ۼ��� : mju 
*/

#include<stdio.h>

void doExam1(); // ���� ������ ����  
void doExam2(); // ���� ������ ����

int main() 
{
	return 0;
}

// ���� ������ ����
void doExam1() 
{
    //1. ���� ����
    int x, y;
    x = 10;
    y = 11;

    //2. ���迬���� ���� 
    //���̸� 1 ���, �����̸� 0 ���  
    printf("x==y = %d\n", x == y); // 10�� 11�� ������?  false -  0
    printf("x!=y = %d\n", x != y); // 10�� 11�� ����������?  true - 1
    printf("x>=y = %d\n", x >= y); // 10�� 11����  ũ�ų� ������ ?  false -  0
    printf("x<=y = %d\n", x <= y); // 10�� 11���� �۰ų� ������ ?  true - 1
    printf("x>y = %d\n", x > y);   // 10�� 11���� ū�� ?  false -  0
    printf("x<y = %d\n", x < y);   // 10�� 11����  ������ ? true - 1

}

// ���� ������ ����  
void doExam2() {
    //1. ���� ����
    int x, y;
    x = 10;
    y = -11;

    //2. ���� ������ ���� 
    //���̸� 1 ���, �����̸� 0 ���  - ���� ����� 0 �̸� ����, 0�� �ƴϸ� ��   
    printf("and - x&&y = %d\n", x && y); // 10(��) && -11(��) ?  true -  1
    printf("or - x||y = %d\n", x || y);  // 10(��) || -11(��) ?  true -  1
    printf("not - !x = %d\n", !x);       // ! 10(��) ?  false -  0

	//3. ���� ������ ����  
    printf("x�� 1�� �ƴϰ� x�� 2�� �ƴϴ� = %d\n", x != 1 && x != 2);   // x�� 1�̴� x==1 , 1�� �ƴϴ� x!=1 
    printf("x�� 1�� �ƴϰų� x�� 2�� �ƴϴ� = %d\n", x != 1 || x != 2);  
}
