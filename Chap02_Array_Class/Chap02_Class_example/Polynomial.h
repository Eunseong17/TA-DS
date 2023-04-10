#pragma once
#define MAX_DEGREE 80 // 다항식의 처리 가능한 최대 차수 +1 
#include <cstdio>
#include <vector>
#include <iostream> // input output stream
using namespace std;

class Polynomial_V {
	vector <float> coef;  // 사이즈 조절시 coef(SIZE), ex) coef(10)
public:
	int degree() { return coef.size(); }
	
	void read() {
		int deg;
		float value;

		printf("다항식의 최고 차수를 입력하시오: ");
		scanf_s("%d", &deg);
		printf("각 항의 계수를 입력하시오 (총 %d개) : ", deg + 1);
		for (int i = 0; i <= deg; i++) {
			scanf_s("%f",  &value);
			coef.push_back(value);

		}
	}
};

class Polynomial {
	int degree; // 다항식의 최고 차수
	float coef[MAX_DEGREE]; // 각 항에 대한 계수
public:
	Polynomial() { degree = 0; }

	/*
	Polynomial() : degree(0) {}; 와 같음.
	*/

	// 다항식의 내용을 입력받는 멤버함수
	void read() {
		printf("다항식의 최고 차수를 입럭하시오 : ");
		scanf_s("%d", &degree);
		printf("각 항의 계수를 입력하시오 (총 %d개): ", degree + 1);
		for (int i = 0; i <= degree; i++)
			scanf_s("%f", coef + i); // coef + i는 & coef[i]와 동일한 결과를 반환, 배열의 이름은 주소값.
	}
	// 다항식의 내용을 화면에 출력하는 함수
	void display(const char* str = " Poly = ")  // 디폴트 매개변수 사용
	{
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d + ", coef[i], degree - i);
		printf("%4.1f\n", coef[degree]);
	};
	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) { // a항 > b항
			*this = a; // a 다항식을 자기 객체에 복사
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];
		}
		else {
			*this = b; // b 다항식을 자기 객체에 복사
			for (int i = 0; i <= a.degree; i++) // a항 <= b항
				coef[i + (degree - a.degree)] += a.coef[i]; // b 다항식을 자신에 복사
		}
	}
	bool isZero() { return degree == 0;  } // 최고차수가 0인가?
	void negate() {  // 모든 계수의 부호를 바꿈
		for (int i = 0; i < degree; i++) {
			coef[i] = -coef[i];
		}
	}
};