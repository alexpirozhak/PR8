#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8_1_char/PR8_1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[151] = "ooo";

			bool res = Check(s);

			Assert::AreEqual(res, false);
		}
	};
}
