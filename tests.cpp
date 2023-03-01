#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>
#include "doctest.h"
#include "funcs.h"

TEST_CASE("The Cases"){
    CHECK(isDivisibleBy(110,5) == true);
    CHECK(isDivisibleBy(45,8) == false);
    CHECK(isPrime(5) == true);
    CHECK(isPrime(10) == false);
    CHECK(isPrime(15) == false);
    CHECK(isPrime(17) == true);
    CHECK(nextPrime(10) == 11);
    CHECK(nextPrime(24) == 29);
    CHECK(countPrimes(3,15) == 5);    
    CHECK(countPrimes(15,35) == 8);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(9) == false);
    CHECK(nextTwinPrime(8) == 11);
    CHECK(nextTwinPrime(22) == 29);
    CHECK(nextTwinPrime(49) == 59);
    CHECK(largestTwinPrime(1,15) == 13);
    CHECK(largestTwinPrime(11,28) == 19);
    CHECK(largestTwinPrime(15,45) == 43);
}