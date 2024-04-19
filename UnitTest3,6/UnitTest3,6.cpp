#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.6/B1.h"
#include "../lab3.6/B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest36
{
	TEST_CLASS(UnitTest36)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			B1 obj(5);
			obj.show_B1();
			Assert::AreEqual(5, 5);
		}
	};
}
