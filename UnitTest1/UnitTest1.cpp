#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR6.1\PR6.1\PR6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const n = 3;
			int a[n] = { -2, 5, 7 };
			int count = 0;
			for (int i = 0; i < n; i++)
			{
				if ((i > 0) && !(i % 5 == 0))
					count++;
			}
			Assert::AreEqual(2, count);
		}
	};
}
