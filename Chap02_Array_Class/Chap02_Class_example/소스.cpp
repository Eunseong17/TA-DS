#include "Polynomial.h"
#include "Birthday.h"

void swap(int& x, int& y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

void main() {

	/*
	Polynomial a, b, c;
	a.read();
	b.read();
	c.add(a, b);
	a.display("A = ");
	b.display("B = ");
	c.display("A+B = ");
	*/


	// ��ü �迭
	Student eei[10];
	strcpy_s(eei[2].name, "Eunseong");
	eei[2].dDay.month = 10;
	eei[2].dDay.date = 2;
	printf("�̸��� : %s, %d�� %d�� ���Դϴ� \n", eei[2].name, eei[2].dDay.month, eei[2].dDay.date);
	
	//72p ������ �Ǵ� ���۷�����
	int a = 1, b = 2;
	swap(a, b);
	printf("%d %d", a, b);
}

