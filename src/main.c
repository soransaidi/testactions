#include <stdio.h>
#include <stdlib.h>
#include "fizzbuzzwhiz.h"

#define ERROR_MESSAGE "Enter a number in the range of [1, 255] as an argument!\n"

static int *strtoint(const char *str, int *ptr)
{
    int *result = ptr;

    *ptr = 0;

    for (char *d = (char *)str; *d != '\0'; d++)
    {
        if ((*d < '0') || (*d > '9'))
        {
            result = NULL;
            break;
        }

        *ptr *= 10;
        *ptr += (*d - '0');
    }

    return result;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        (void)printf(ERROR_MESSAGE);
        exit(1);
    }

    int number = 0;

    if (NULL == strtoint(argv[1], &number))
    {
        (void)printf(ERROR_MESSAGE);
        exit(1);
    }

    if ((number < 1) || (number > 255))
    {
        (void)printf(ERROR_MESSAGE);
        exit(1);
    }

    for (int i = 1; i <= number; i++)
    {
        (void)printf("%s\t", fizz_buzz_whiz(i));
    }

    (void)printf("\n");

    return 0;
}
