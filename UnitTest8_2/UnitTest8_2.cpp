#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8_2/PR8_2_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "jh454k f658493k fj98654n g";
			int k = MaxLength(s);

			Assert::AreEqual(k, 6);
		}
	};
}
