#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "fizzbuzzwhiz.h"

#define FIRST_PRIME 2U

#define WHIZ "Whiz"

#define FIZZ "Fizz"
#define FIZZ_DIV (3U)

#define BUZZ "Buzz"
#define BUZZ_DIV (5U)

#define FIZZBUZZ "FizzBuzz"
#define FIZZBUZZ_DIV (FIZZ_DIV * BUZZ_DIV)

static char result[sizeof(FIZZBUZZ)] = {0};

bool isprime(uint8_t number);

char *fizz_buzz_whiz(uint8_t num)
{
    if (num == 0)
    {
        strcpy(result, "");
    }
    else if (num % FIZZBUZZ_DIV == 0)
    {
        strcpy(result, FIZZBUZZ);
    }
    else if (num % BUZZ_DIV == 0)
    {
        strcpy(result, BUZZ);
    }
    else if (num % FIZZ_DIV == 0)
    {
        strcpy(result, FIZZ);
    }
    else if (isprime(num))
    {
        strcpy(result, WHIZ);
    }
    else
    {
        sprintf(result, "%d", num);
    }

    return result;
}

bool isprime(uint8_t number)
{
    bool result = true;

    if (number < FIRST_PRIME)
    {
        result = false;
    }
    else
    {
        if (number > FIRST_PRIME)
        {
            uint8_t counter = FIRST_PRIME;
            uint8_t max_number = ceil(sqrt(number));

            while (counter <= max_number)
            {
                if (number % counter == 0)
                {
                    result = false;
                    break;
                }

                counter++;
            }
        }
    }

    return result;
}
