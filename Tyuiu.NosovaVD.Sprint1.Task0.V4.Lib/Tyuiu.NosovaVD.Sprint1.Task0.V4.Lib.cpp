// Tyuiu.NosovaVD.Sprint1.Task0.V4.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"


// TODO: Это пример библиотечной функции.
class Service : public ISprint1Task0V00
{
	virtual int Calculate(int a, int b) override
	{
		return a * b;
	} 
};
