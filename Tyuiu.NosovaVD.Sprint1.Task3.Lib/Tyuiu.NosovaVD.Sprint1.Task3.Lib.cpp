// Tyuiu.NosovaVD.Sprint1.Task3.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: Это пример библиотечной функции.
class Service : public ISprint1Task3V0
{
	virtual int Uslovie (int a) override
	{
		if (a % 2 == 0) 
		{
			if (a != 1000 && a % 4 == 0)
			{
				return a * 2;
			}
			else
			{
				return a / 5;
			}
		}
		else
		{
			return a / 5;
		}
	}
};
