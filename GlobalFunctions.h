#pragma once

#include "IManageable.h"

/*
����������.
��������� ������ �������� �� �������� � ������� �����������.
*/
void sort(IManageable** objects, int size);

/*
����� ������������ ��������.
���������� ����������� �������� ����� ���� �������� �������.
*/
float min(IManageable** objects, int size);

/*
����� ������������� ��������.
���������� ������������ �������� ����� ���� �������� �������.
*/
float max(IManageable** objects, int size);

/*
����� �� ��������.
���������� ������ ������� ������� � ����������� ���������.
���� ������ ���, ���������� -1.
*/
int find(IManageable** objects, int size, float value);

/*
����� � �������.
������� ������� ���������� �� �������� ������� � ������.
*/
void printLine(IManageable** objects, int size);

/*
����� � �������.
������� ������ ���������� �� �������� ������� � �������.
*/
void printColumn(IManageable** objects, int size);

/*
������������.
���������� ����� ���� �������� �������� �������.
*/
float totalSum(IManageable** objects, int size);

/*
������ � ���������.
���������� ���������� �������� � �������, �������� ������� ���������
� ��������� �� � �� �.
*/
int countInRange(IManageable** objects, int size, float A, float B);

/*
����� �����.
������� ������ ���������� �� �������� ������� � �������� ����������.
*/
void printPikes(IManageable** objects, int size);

/*
�����������.
�������� ������ ��������.
*/
void makeCopy(IManageable** objects, int size, IManageable** objectsCopied);

/*
�����������.
���������� ������ ������ �������� � ������.
*/
IManageable** join(IManageable** objects, int& size, IManageable** objectsCopied, int size1, int a);

/*
����������.
��������� ����� ������ � ������ ��������.
*/
IManageable** append(IManageable** objects, int& size, int a);

/*
���������� �����.
������� ������ ���������� �������� �������� �������.
*/
void printUnique(IManageable** objects, int size);

