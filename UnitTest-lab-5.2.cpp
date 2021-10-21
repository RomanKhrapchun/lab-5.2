#include "pch.h"
#include "CppUnitTest.h"
#include "..\lad-5.2\lad-5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab52
{
	TEST_CLASS(UnitTestlab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			A(-0.00, 1, a);
			Assert::AreEqual(-0.00000, a);
		}
	};
}
