#include "pch.h"
#include "CppUnitTest.h"
#include "../lab81s/lab81.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "OGOandAGA";
			string ans = "**and**";
			string functionResult ;
			Assert::AreEqual(ans, Change(str));
		}
	};
}
