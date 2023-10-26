#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include <iostream>
using namespace std;

#include "IPrintable.h"
#include "ICopyable.h"
#include "IValue.h"

class IManageable: public IPrintable, public ICopyable, public IValue
{

};

