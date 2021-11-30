#ifndef FIZZBUZZWHIZ_H
#define FIZZBUZZWHIZ_H

#include <stdint.h>

/**
 * @brief The function returns an empty string, a number, Fizz, Buzz, FizzBuzz or Whiz based on num.
 *
 * @param num The number to check
 * @return char* The ouput string. An empty string if num is 0, FizzBuzz if num is divisible by 3 and 5,
 *               Buzz if num is divisible by 5, Fuzz if num is divisible by 3, Whiz if num is a prime,
 *               otherwise num as a string.
 */

char *fizz_buzz_whiz(uint8_t num);

#endif /* FIZZBUZZWHIZ_H */
