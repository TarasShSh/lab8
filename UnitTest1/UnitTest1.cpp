
#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab81/lab81.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool truth = true;
			char str[10] = "aAGAefOGO";
			char strAns[8] = "a**ef**";

			Assert::AreEqual(Change(str, truth), strAns);
		}
	};
}
