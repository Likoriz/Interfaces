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
	virtual void copy(ICopyable* object) = 0;

	/*
	�������� ���������.
	���������� ������, ������������ ����������, � ��������,
	���������� �����. � ������ ��������� ���������� true, � ���� ������ false.
	*/
	virtual bool isEqual(IManageable* object) = 0;
};

