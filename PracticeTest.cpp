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

TEST(PracticeTest, is_sadtest_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("sas bad");
    ASSERT_FALSE(actual);
}
