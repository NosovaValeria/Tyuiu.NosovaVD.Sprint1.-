#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint1.Task0.V4.Lib/Tyuiu.NosovaVD.Sprint1.Task0.V4.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0
{
	TEST_CLASS(UnitTest0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task0V00* service = new Service();
			int a = 5; 
			int b = 4;
			int c = service->Calculate(a, b);
			Assert::AreEqual(20, c); 
		}
	};
}
