#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			c = h(2, 3) + pow(h(2, 4), 2) / (1 + pow(h(pow(2, 2), pow(3, 2)), 3));
			Assert::AreEqual(-5.000525, c, 0.00001);
				
		}
	};
}
