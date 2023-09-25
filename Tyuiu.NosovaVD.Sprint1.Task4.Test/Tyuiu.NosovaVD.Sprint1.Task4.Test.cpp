#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint1.Task4.Lib/Tyuiu.NosovaVD.Sprint1.Task4.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task4* service = new Service4();
			float x = 5;
			float y = service->Vibor(x);
			float otvet = -14.0;
			Assert::AreEqual(otvet, y);
		}
	}; 
}
