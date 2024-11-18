#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.3_ite/lab_6.3_ite.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int size = 6;
			int a[size] = { 1, 2, 3, 4, 5, 6 }; 
			int expected = 3;
			int actual = CountEvenElements(a, size);
			Assert::AreEqual(expected, actual); 
		}

		TEST_METHOD(TestMethod2)
		{
			const int size = 5;
			int a[size] = { 1, 3, 5, 7, 9 }; 
			int expected = 0;
			int actual = CountEvenElements(a, size);
			Assert::AreEqual(expected, actual); 
		}

		TEST_METHOD(TestMethod3)
		{
			const int size = 4;
			int a[size] = { 2, 4, 6, 8 }; 
			int expected = 4;
			int actual = CountEvenElements(a, size);
			Assert::AreEqual(expected, actual); 
		}
	};
}
