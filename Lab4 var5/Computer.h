#pragma once
#include "Processor.h"
#include "HardDrive.h"

class Computer :
    public Processor,
    public HardDrive
{
private:
    float price;
    std::string modelComputer;
public:
    Computer();
    ~Computer() {}
    friend std::istream& operator>> (std::istream& is, Computer &temp)
    {
        std::cout << "������ ������� ������� ���������: ";
        try
        {
            is >> temp.clockFrequency;
            if(is.fail())
                throw "������� ������� ������ ����";
            else if (temp.clockFrequency < 0.7)
                throw "������� ������� ���������� �� ���� ���� ������ �� 0.7 ���";
        }
        catch (const char* exception)
        {
            std::cout << "�������: " << exception << std::endl;
            exit(-1);
        }
        is.get();
        std::cout << "������ ����� ���������: ";
        getline(is, temp.brandProcessor);
        std::cout << "������ ����� ��������� �����: ";
        try
        {
            is >> temp.ROM;
            if (is.fail())
                throw "������� ������� ������ ����";
            else if (temp.ROM < 1)
                throw "����� ��������� ����� �� ���� ���� ������ �� 1 ��";
        }
        catch (const char* exception)
        {
            std::cout << "�������: " << exception << std::endl;
            exit(-1);
        }
        is.get();
        std::cout << "������ ������ ����'�����: ";
        getline(is, temp.modelComputer);
        std::cout << "������ ���� ����'�����: ";
        try
        {
            is >> temp.price;
            if (is.fail())
                throw "������� ������� ������ ����";
            else if (temp.price < 1)
                throw "ֳ�� �� ���� ���� ������ �� 1 ������";
        }
        catch (const char* exception)
        {
            std::cout << "�������: " << exception << std::endl;
            exit(-1);
        }
        return is;
    }
    friend std::ostream& operator << (std::ostream& os, const Computer temp)
    {
        os << "������ ����'�����: " << temp.modelComputer << std::endl;
        os << "����� ���������: " << temp.brandProcessor << std::endl;
        os << "������� ���������: " << temp.clockFrequency << " ���" << std::endl;
        os << "����� ��������� �����: " << temp.ROM << " ��" << std::endl;
        os << "ֳ��: " << temp.price << " �������" << std::endl;
        return os;
    }
};

