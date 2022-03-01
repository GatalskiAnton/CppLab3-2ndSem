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

int Calculate(std::string& formula)
{
	Stack<int> number;
	Stack<char> operations;
	return 0;
}
