#include "ReversePolish.h"
#include "SortedList.h"
int main()
{
	std::string str = "max(min(1,5),min(15,2)";
	parceString(str);
	std::cout << str;
}