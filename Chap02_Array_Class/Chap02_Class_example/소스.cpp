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


	// 객체 배열
	Student eei[10];
	strcpy_s(eei[2].name, "Eunseong");
	eei[2].dDay.month = 10;
	eei[2].dDay.date = 2;
	printf("이름은 : %s, %d월 %d일 생입니다 \n", eei[2].name, eei[2].dDay.month, eei[2].dDay.date);
	
	//72p 참조형 또는 레퍼런스형
	int a = 1, b = 2;
	swap(a, b);
	printf("%d %d", a, b);
}

