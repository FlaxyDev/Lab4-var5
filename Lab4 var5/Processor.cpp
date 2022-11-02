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
			throw "������� ������� ���������� �� ���� ���� ������ �� 0.7 ���";
		else 
			clockFrequency = tClockFrequency;
	}
	catch (const char* exception)
	{
		std::cout << "�������: " << exception << std::endl;
		exit(-1);
	}
}