/*
    Author: Aryan Singh
    WAP to generate prime numbers and store it into an array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int count, i;
    int primes[50];
    int primeIndex = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for(count = 5; count <= 100; count = count + 2)
    {
        isPrime = true;
        for(i = 1; isPrime && count/primes[i] >= primes[i]; ++i)
        {
            if(count%primes[i] == 0)
            {
                isPrime = false;
            }
            if(isPrime == true)
            {
                primes[primeIndex] = count;
                ++primeIndex;
            }
        }
    }
    for(i = 0; i < primeIndex; ++i)
    {
        printf("%i ", primes[i]);
    }
    printf("\n");
    return 0;
}