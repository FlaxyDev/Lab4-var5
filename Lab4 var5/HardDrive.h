#pragma once
#include <iostream>
class HardDrive
{
protected:
	int ROM;
public:
	HardDrive() { ROM = 0; }
	~HardDrive() {}
	void setROM(int tROM);
	int getROM() { return ROM; }
};

