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
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, empty_pal)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, sort_from_ascending)
{
    Practice obj;
	int first, second, third;
	first = 1;
	second = 2;
	third = 3;
    obj.sortDescending(first, second, third);
	ASSERT_TRUE(first > second && second > third && first > third);

}
TEST(PracticeTest, sort_duplicate_numbers)
{
    Practice obj;
	int first, second, third;
	first = 3;
	second = 3;
	third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_FALSE(first > second && second > third && first > third);
}
TEST(PracticeTest, sort_from_sorted)
{
    Practice obj;
	int first, second, third;
	first = 3;
	second = 2;
	third = 1;
    obj.sortDescending(first, second, third);
	ASSERT_TRUE(first > second && second > third && first > third);

}

