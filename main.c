#include <stdio.h>
#include "header.h"
#include <locale.h>
void main(void) {
	double x, y, result;
	setlocale(LC_ALL, "Rus");
	printf("1. ������� 1 \n2. ������� 2 \n");
	switch(getch()) {
	case '1':
		printf("x = ");
		scanf_s("%lf", &x);
		printf("y = ");
		scanf_s("%lf", &y);
		if (isInArea(x, y))
			printf("����� ��������� � �������������� �������");
		else
			printf("����� �� ��������� � �������������� �������");
		break;

	case '2':
		printf("x = ");
		scanf_s("%lf", &x);
		result = f(x);
		printf("f = %lf", result);
		break;

	default:
		printf("�������� ����");
		break;

	}

}