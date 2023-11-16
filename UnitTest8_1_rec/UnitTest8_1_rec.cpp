#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8_1_rec/PR8_1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[151] = "_onoo_ _onoo_ _onoo_";
			char* bem2;
			char* bem1 = new char[151];
			bem1[0] = '\0'; 

			bem2 = Change(bem1, s, bem1, 0);

			Assert::AreEqual(strcmp(bem1, "_o***o_ _o***o_ _o***o_"), 0);
			Assert::AreEqual(strcmp(bem2, "_o***o_ _o***o_ _o***o_"), 0);
		}
	};
}
