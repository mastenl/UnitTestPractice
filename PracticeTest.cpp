/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_one_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_wierd_capname_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("hannaH");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_sadtest_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ab.$.ba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("sas bad");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_sizetest_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ababa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_misplacement1_descending)
{
    Practice obj;
		int a = 3;
		int b = 1;
		int c = 2;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}

TEST(PracticeTest, is_misplacement2_descending)
{
    Practice obj;
		int a = 3;
		int b = 2;
		int c = 1;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}

TEST(PracticeTest, is_misplacement3_descending)
{
    Practice obj;
		int a = 1;
		int b = 2;
		int c = 3;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}

TEST(PracticeTest, is_misplacement4_descending)
{
    Practice obj;
		int a = 1;
		int b = 3;
		int c = 2;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}

TEST(PracticeTest, is_misplacement5_descending)
{
    Practice obj;
		int a = 2;
		int b = 1;
		int c = 3;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}

TEST(PracticeTest, is_misplacement4_descending)
{
    Practice obj;
		int a = 2;
		int b = 3;
		int c = 1;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}

TEST(PracticeTest, is_same_num_descending)
{
    Practice obj;
		int a = 3;
		int b = 1;
		int c = 1;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}

TEST(PracticeTest, is_misplacement4_descending)
{
    Practice obj;
		int a = 1;
		int b = -2;
		int c = -3;
    obj.sortDescending(a,b,c);
    ASSERT_TRUE(a > b && b > c && a > c);
}
