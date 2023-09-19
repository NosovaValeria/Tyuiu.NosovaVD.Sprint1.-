// Tyuiu.NosovaVD.Sprint1.Task1.V4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: Это пример библиотечной функции.
class Service1 : public ISprint1Task1
{
	virtual int Logic(int a) override
	{
		return a % 10;
	}
};
