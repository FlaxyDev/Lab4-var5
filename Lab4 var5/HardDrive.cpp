#include "HardDrive.h"
void HardDrive::setROM(int tROM)
{
	try
	{
		if (ROM < 1)
			throw "����� ��������� ����� �� ���� ���� ������ �� 1 ��";
		else
			ROM = tROM;
	}
	catch (const char* exception)
	{
		std::cout << "�������: " << exception << std::endl;
		exit(-1);
	}
}