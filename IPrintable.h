#pragma once

class IManageable;

class IPrintable
{
public:
	/*
	������� �����.
	������� ���������� �� ������� � ���������� �����.
	*/
	virtual void printShort() = 0;

	/*
	������ �����.
	������� ���������� �� ������� ���������.
	*/
	virtual void printFull() = 0;
};

