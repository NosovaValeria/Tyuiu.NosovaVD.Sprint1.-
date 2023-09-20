#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint1.Task2.V4.Lib/Tyuiu.NosovaVD.Sprint1.Task2.V4.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* service = new Service3();
			int a = 133;
			int b = service->LogicLong(a);
			Assert::AreEqual(1, b);
		}
	};
}
