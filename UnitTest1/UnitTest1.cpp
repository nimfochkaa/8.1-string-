#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1 string/8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(hasSQorQS("This contains SQ and QS"));
			Assert::IsTrue(hasSQorQS("Only SQ here"));
			Assert::IsTrue(hasSQorQS("QS appears here"));
		}
	};
}
