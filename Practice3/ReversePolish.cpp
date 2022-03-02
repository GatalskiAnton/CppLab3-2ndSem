#pragma once
#include "ReversePolish.h"

void parceString(std::string& formula)
{
    std::string result;
    for (int i = 0; i < formula.size(); i++)
    {
        if (formula[i] == 'm' && formula[i + 1] == 'a' && formula[i + 2] == 'x')
        {
            result += 'a';
            i = i + 2;
            continue;
        }
        if (formula[i] == 'm' && formula[i + 1] == 'i' && formula[i + 2] == 'n')
        {
            result += 'i';
            i = i + 2;
            continue;
        }
        result += formula[i];
    }
    formula = result;
}

bool isOperation(char op)
{
    return op == 'a' || op == 'i';
}

bool isNum(char num)
{
    return num >= 48 && num <= 57;
}

int CalculateExpression(char op, int firstValue, int secondValue)
{
    if (op == 'a')
    {
        return firstValue > secondValue ? firstValue : secondValue;
    }
    if (op == 'i')
    {
        return firstValue > secondValue ? secondValue : firstValue;
    }
}

int Calculate(std::string& formula)
{
    Stack<int> number;
    Stack<char> operations;
    for (int i = 0; i < formula.size(); i++)
    {
        if (isNum(formula[i]))
        {
            number.push(formula[i] - '0');
            continue;
        }
        if (isOperation(formula[i]))
        {
            operations.push(formula[i]);
            continue;
        }
        if (number.getSize() == 2)
        {
            int result = CalculateExpression(operations.top(), number.top(), number.top());
            number.push(result);
            continue;
        }
    }
    return number.top();
}