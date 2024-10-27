#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1_string/8.1_string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:

		TEST_METHOD(TestFindThirdDot)
		{

			Assert::AreEqual(5, FindThirdDot("a.b.c.d"));     
			Assert::AreEqual(8, FindThirdDot("ab.cd.ef.gh"));   
			Assert::AreEqual(-1, FindThirdDot("ab.c"));       
			Assert::AreEqual(4, FindThirdDot("..ab.cd.ef."));   
		}

		TEST_METHOD(TestReplaceEveryFourth)
		{

			Assert::AreEqual(std::string("abc.efg.ij"), ReplaceEveryFourth("abcdefghij"));
			Assert::AreEqual(std::string("a.c.e.g.i.k.m"), ReplaceEveryFourth("a.c.e.g.i.k.m"));
			Assert::AreEqual(std::string("abc.def.hij."), ReplaceEveryFourth("abc defghijk"));
			Assert::AreEqual(std::string("abc. ef.h i.kl .nop"), ReplaceEveryFourth("abcd efgh ijkl mnop"));
		}
	};
}
