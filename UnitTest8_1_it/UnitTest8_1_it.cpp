#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8_1.cpp/PR8_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
	TEST_CLASS(UnitTest81it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[151] = "no fugjb no fubub no";
			char* res = new char[151];
			res = Change(s);

			Assert::AreEqual(strcmp(s, "*** fugjb *** fubub ***"), 0);
			Assert::AreEqual(strcmp(res, "*** fugjb *** fubub ***"), 0);
		}
	};
}
