#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_LR_8.1.rec/AP_LR_8.1.rec.cpp"


int Count(const char* str, int i);
char* Change(char* dest, const char* src, char* buf, int i);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81Rec
{
	TEST_CLASS(UnitTest81Rec)
	{
	public:

		TEST_METHOD(TestCountAndChangeRec)
		{
			char str[101] = "abbbbcddddde";

			int count = Count(str, 0);
			Assert::AreEqual(2, count);

			char* dest1 = new char[101];
			dest1[0] = '\0';
			char* dest2 = Change(dest1, str, dest1, 0);

			Assert::AreEqual("ab**c**de", dest1);
			Assert::AreEqual("ab**c**de", dest2);
		}
	};
}