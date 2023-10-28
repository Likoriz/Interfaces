#pragma once

class IManageable;

class ICopyable
{
public:
	/*
	Копирование.
	Производит копирование передаваемого аргументом объекта
	в объект, вызывающий метод.
	*/
	virtual void copy(ICopyable* object) = 0;

	/*
	Проверка равенства.
	Сравнивает объект, передаваемый аргументом, с объектом,
	вызывающим метод. В случае равенства возвращает true, в ином случае false.
	*/
	virtual bool isEqual(IManageable* object) = 0;
};

