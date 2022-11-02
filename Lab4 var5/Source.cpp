#include "Computer.h"
#include "windows.h"
#include <fstream>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Computer c1;
	std::cin >> c1;
	std::ofstream out;
	out.open("Computer.txt");
	if (out.is_open())
	{
		out << c1;
	}
	return 0;
}