#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint0.Task7.Lib/Tyuiu.KomarovMA.Sprint0.Task7.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task7* date = new Service1();
			int a = 123;
			int b = 2;
			bool n;

			//run
			n = date->Rezalt(a, b);

			//Valid
			Assert::AreEqual(true, n);
		}
	};
}
