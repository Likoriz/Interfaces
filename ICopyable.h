#pragma once

class IManageable;

class ICopyable
{
public:
	/*
	�����������.
	���������� ����������� ������������� ���������� �������
	� ������, ���������� �����.
	*/
	virtual void copy(IManageable* object) = 0;

	/*
	�������� ���������.
	���������� ������, ������������ ����������, � ��������,
	���������� �����. � ������ ��������� ���������� true, � ���� ������ false.
	*/
	virtual bool isEqual(IManageable* object) = 0;
};

