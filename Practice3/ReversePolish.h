#pragma once
#include "Stack.h"

void parceString(std::string& formula);

bool isOperation(char op);

bool isNum(char num);

int CalculateExpression(char op, int firstValue, int secondValue);

int Calculate(std::string& formula);