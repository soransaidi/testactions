#include "unity.h"
#include "fizzbuzzwhiz.h"

void setUp() {}
void tearDown() {}

void test_fizz_buzz_whiz_returns_nothing(void)
{
    TEST_ASSERT_EQUAL_STRING("", fizz_buzz_whiz(0));
}

void test_fizz_buzz_whiz_returns_digits(void)
{
    TEST_ASSERT_EQUAL_STRING("1", fizz_buzz_whiz(1));
}

void test_fizz_buzz_whiz_returns_fizz(void)
{
    TEST_ASSERT_EQUAL_STRING("Fizz", fizz_buzz_whiz(3));
}

void test_fizz_buzz_whiz_returns_buzz(void)
{
    TEST_ASSERT_EQUAL_STRING("Buzz", fizz_buzz_whiz(10));
}

void test_fizz_buzz_whiz_returns_fizzbuzz(void)
{
    TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizz_buzz_whiz(15));
}

void test_fizz_buzz_whiz_returns_whiz(void)
{
    TEST_ASSERT_EQUAL_STRING("Whiz", fizz_buzz_whiz(7));
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_fizz_buzz_whiz_returns_nothing);
    RUN_TEST(test_fizz_buzz_whiz_returns_digits);
    RUN_TEST(test_fizz_buzz_whiz_returns_fizz);
    RUN_TEST(test_fizz_buzz_whiz_returns_buzz);
    RUN_TEST(test_fizz_buzz_whiz_returns_fizzbuzz);
    RUN_TEST(test_fizz_buzz_whiz_returns_whiz);

    return UNITY_END();
}
