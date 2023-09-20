// Tyuiu.NosovaVD.Sprint1.Task2.V4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service3 : public ISprint1Task2 
{
	virtual int LogicLong(int a) override
	{
		int b = a % 10;
        int c = 0;
        if (b % 3 == 0)
        {
            c = 1;
        }
        else
        {
            c = 0;
        }
		return c;
	}
};
