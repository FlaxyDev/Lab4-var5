#include "HardDrive.h"
void HardDrive::setROM(int tROM)
{
	try
	{
		if (ROM < 1)
			throw "Обсяг жорсткого диску не може бути меншим ніж 1 ГБ";
		else
			ROM = tROM;
	}
	catch (const char* exception)
	{
		std::cout << "Помилка: " << exception << std::endl;
		exit(-1);
	}
}