#pragma once
#define MAX_DEGREE 80 // ���׽��� ó�� ������ �ִ� ���� +1 
#include <cstdio>
#include <vector>
#include <iostream> // input output stream
using namespace std;

class Polynomial_V {
	vector <float> coef;  // ������ ������ coef(SIZE), ex) coef(10)
public:
	int degree() { return coef.size(); }
	
	void read() {
		int deg;
		float value;

		printf("���׽��� �ְ� ������ �Է��Ͻÿ�: ");
		scanf_s("%d", &deg);
		printf("�� ���� ����� �Է��Ͻÿ� (�� %d��) : ", deg + 1);
		for (int i = 0; i <= deg; i++) {
			scanf_s("%f",  &value);
			coef.push_back(value);

		}
	}
};

class Polynomial {
	int degree; // ���׽��� �ְ� ����
	float coef[MAX_DEGREE]; // �� �׿� ���� ���
public:
	Polynomial() { degree = 0; }

	/*
	Polynomial() : degree(0) {}; �� ����.
	*/

	// ���׽��� ������ �Է¹޴� ����Լ�
	void read() {
		printf("���׽��� �ְ� ������ �Է��Ͻÿ� : ");
		scanf_s("%d", &degree);
		printf("�� ���� ����� �Է��Ͻÿ� (�� %d��): ", degree + 1);
		for (int i = 0; i <= degree; i++)
			scanf_s("%f", coef + i); // coef + i�� & coef[i]�� ������ ����� ��ȯ, �迭�� �̸��� �ּҰ�.
	}
	// ���׽��� ������ ȭ�鿡 ����ϴ� �Լ�
	void display(const char* str = " Poly = ")  // ����Ʈ �Ű����� ���
	{
		printf("\t%s", str);
		for (int i = 0; i < degree; i++)
			printf("%5.1f x^%d + ", coef[i], degree - i);
		printf("%4.1f\n", coef[degree]);
	};
	void add(Polynomial a, Polynomial b) {
		if (a.degree > b.degree) { // a�� > b��
			*this = a; // a ���׽��� �ڱ� ��ü�� ����
			for (int i = 0; i <= b.degree; i++)
				coef[i + (degree - b.degree)] += b.coef[i];
		}
		else {
			*this = b; // b ���׽��� �ڱ� ��ü�� ����
			for (int i = 0; i <= a.degree; i++) // a�� <= b��
				coef[i + (degree - a.degree)] += a.coef[i]; // b ���׽��� �ڽſ� ����
		}
	}
	bool isZero() { return degree == 0;  } // �ְ������� 0�ΰ�?
	void negate() {  // ��� ����� ��ȣ�� �ٲ�
		for (int i = 0; i < degree; i++) {
			coef[i] = -coef[i];
		}
	}
};