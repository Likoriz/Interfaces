#pragma once

class IPrintable
{
public:
	/*
	Краткий вывод.
	Выводит информацию об объекте в компактной форме.
	*/
	virtual void printShort() = 0;

	/*
	Полный вывод.
	Выводит информацию об объекте полностью.
	*/
	virtual void printFull() = 0;
};

