// Clab1 task4

#include "task4.h"

/*  �������� ���������, ������� ��������� ���� �� ������������ �������
(����, �����) � ����������� (����������). ������ �������� � ���� ����
����� �����, ��������� � ���� ������������� ����� � ��������� �� 1 �����.
1 ��� = 12 ������. 1 ���� = 2.54 ��.*/

float convert(int feet, int inches)
{
	const float f = 30.48; // �� � ����
	const float i = 2.54; // �� � �����
	
	float height = feet * f + inches * i;
	return height;
}
