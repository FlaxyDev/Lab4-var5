#pragma once
#include <iostream>
#include <string>

class Processor
{
protected:
	float clockFrequency;
	std::string brandProcessor;
public:
	Processor();
	~Processor() {}
	void setBrand(std::string tBrand);
	void setClockFrequency(float tClockFrequency);
	std::string getBrand() { return brandProcessor; }
	float getCloclFrequency() { return clockFrequency; }

};

