#pragma once
#include "car.h"

class SportsCar : public Car
{
public:
	bool bTurbo = false;
	SportsCar() {}			// ������
	~SportsCar() {}			// �Ҹ���
	SportsCar(int s, int g, const char* n) :Car(s, g, n) {}; // �θ� Ŭ������ ������ ���
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo)
			speed += 20;		// �ͺ� ����� ��� 20�� ����
		else
			Car::speedUp();		// �ͺ� ��� �ƴϸ� Car Ŭ������ speedUp�Լ� ���
	}
};