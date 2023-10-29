#include "Text.h"

Text::Text()
{
	length = rand() % (100 - 1 + 1) + 1;
	text = new char[100];

	for (int i = 0; i < length; i++)
		text[i] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 62];
}

Text::~Text()
{
	delete text;
	text = nullptr;
}

void Text::printShort()
{
	if (length > 10)
		cout << text[0] << text[1] << text[2] << "..." << text[length - 3] << text[length - 2] << text[length - 1] << " " << length;
	else
		printFull();
}

void Text::printFull()
{
	for (int i = 0; i < length; i++)
		cout << text[i];
	cout << " " << length;
}

void Text::copy(ICopyable* object)
{
	Text* textToCopy = (Text*)object;
	strncpy(text, textToCopy->text, textToCopy->length);
	length = textToCopy->length;
}

bool Text::isEqual(IManageable* object)
{
	//Text* textObject = (Text*)object;
	//if (strncmp(text, textObject->text, textObject->length) == 0)
	//	return true;
	//else
	//	return false;
	if (length == object->value())
		return 1;
	else
		return 0;
}

float Text::value()
{
	return length;
}
