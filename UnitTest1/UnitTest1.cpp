#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5_1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(2, 1);
			Assert::AreEqual(t, 2.94974, 0.0001);
		}
	};
}
