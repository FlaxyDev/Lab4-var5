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
        std::cout << "Введіть тактову частоту процесора: ";
        try
        {
            is >> temp.clockFrequency;
            if(is.fail())
                throw "Введено символи замість літер";
            else if (temp.clockFrequency < 0.7)
                throw "Тактова частота процессора не може бути мешною ніж 0.7 ГГц";
        }
        catch (const char* exception)
        {
            std::cout << "Помилка: " << exception << std::endl;
            exit(-1);
        }
        is.get();
        std::cout << "Введіть марку процесора: ";
        getline(is, temp.brandProcessor);
        std::cout << "Введіть обсяг жорсткого диску: ";
        try
        {
            is >> temp.ROM;
            if (is.fail())
                throw "Введено символи замість літер";
            else if (temp.ROM < 1)
                throw "Обсяг жорсткого диску не може бути меншим ніж 1 ГБ";
        }
        catch (const char* exception)
        {
            std::cout << "Помилка: " << exception << std::endl;
            exit(-1);
        }
        is.get();
        std::cout << "Введіть модель комп'ютера: ";
        getline(is, temp.modelComputer);
        std::cout << "Введіть ціну комп'ютера: ";
        try
        {
            is >> temp.price;
            if (is.fail())
                throw "Введено символи замість літер";
            else if (temp.price < 1)
                throw "Ціна не може бути меншою ніж 1 гривня";
        }
        catch (const char* exception)
        {
            std::cout << "Помилка: " << exception << std::endl;
            exit(-1);
        }
        return is;
    }
    friend std::ostream& operator << (std::ostream& os, const Computer temp)
    {
        os << "Модель комп'ютера: " << temp.modelComputer << std::endl;
        os << "Марка процесора: " << temp.brandProcessor << std::endl;
        os << "Частота процесора: " << temp.clockFrequency << " ГГц" << std::endl;
        os << "Обсяг жорсткого диска: " << temp.ROM << " ГБ" << std::endl;
        os << "Ціна: " << temp.price << " гривень" << std::endl;
        return os;
    }
};

