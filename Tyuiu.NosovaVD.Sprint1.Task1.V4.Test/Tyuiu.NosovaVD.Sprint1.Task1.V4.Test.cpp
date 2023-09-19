#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint1.Task1.V4.Lib/Tyuiu.NosovaVD.Sprint1.Task1.V4.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* service1 = new Service1();
			int a = 127;
			int b = service1->Logic(a);
			Assert::AreEqual(7, b);
		}
	};
}
