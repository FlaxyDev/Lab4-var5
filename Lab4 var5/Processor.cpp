#include "Processor.h"

Processor::Processor()
{
	brandProcessor = "Unknown";
	clockFrequency = 0.0;
}
void Processor::setBrand(std::string tBrand)
{
	brandProcessor = tBrand;
}
void Processor::setClockFrequency(float tClockFrequency)
{
	try
	{
		if (tClockFrequency < 0.7)
			throw "Тактова частота процессора не може бути мешною ніж 0.7 ГГц";
		else 
			clockFrequency = tClockFrequency;
	}
	catch (const char* exception)
	{
		std::cout << "Помилка: " << exception << std::endl;
		exit(-1);
	}
}