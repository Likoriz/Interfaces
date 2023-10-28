#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include <iostream>
#include "IPrintable.h"
#include "ICopyable.h"
#include "IValue.h"

using namespace std;

class IManageable: public IPrintable, public ICopyable, public IValue
{

};

