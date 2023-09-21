#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.Sprint1.Task3.Lib/Tyuiu.NosovaVD.Sprint1.Task3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task3V0* service = new Service();
			int a = 1444;
			int b = service->Uslovie(a);
			Assert::AreEqual(2888, b);
		}
		TEST_METHOD(TestMethod2)
		{
			ISprint1Task3V0* service = new Service();
			int a = 1445;
			int b = service->Uslovie(a);
			Assert::AreEqual(289, b);
		}
	};
}
