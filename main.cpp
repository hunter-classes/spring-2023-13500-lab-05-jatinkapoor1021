#include <iostream>
//#include <cstdlib>
//#include <climits>
//#include <string>
//#include <fstream>
#include "funcs.h"

int main(){
  //Task A
  std::cout << "Task A: Is 110 divisible by 5: \n";
  if(isDivisibleBy(110,5) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Is 45 divisible by 8: \n";
  if(isDivisibleBy(45,8) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }
  
  //Task B
  std::cout << "Is 5 a prime: \n";
  if(isPrime(5) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Is 10 a prime: \n";
  if(isPrime(10) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Is 15 a prime: \n";
  if(isPrime(15) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Is 18 a prime: \n";
  if(isPrime(18) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }
//Task C
std::cout << "The next prime from 10 is: \n";
std::cout << nextPrime(10) << "\n";

std::cout << "The next prime from 24 is: \n";
std::cout << nextPrime(24) << "\n";


//Task D
std::cout << "The number of primes in range (3,15) is: \n";
std::cout << countPrimes(3,15) << "\n";

std::cout << "The number of primes in range (15,35) is: \n";
std::cout << countPrimes(15,35) << "\n";

//Task E
std::cout << "Is 5 a twin prime: \n";
if(isTwinPrime(5) == true){
  std::cout << "Yes \n";
}
else{
  std::cout << "No \n";
}

std::cout << "Is 9 a twin prime: \n";
if(isTwinPrime(9) == true){
  std::cout << "Yes \n";
}
else{
  std::cout << "No \n";
}


//Task F
std::cout << "The next twin prime from 8 is: \n";
std::cout << nextTwinPrime(7) << "\n";

std::cout << "The next twin prime from 22 is: \n";
std::cout << nextTwinPrime(22) << "\n";

std::cout << "The next twin prime from 49 is: \n";
std::cout << nextTwinPrime(49) << "\n";

//Task G
std::cout << "The largest twin prime in range (1,5) is: \n";
std::cout << largestTwinPrime(1,5) << "\n";

std::cout << "The largest twin prime in range (11, 18) is: \n";
std::cout << largestTwinPrime(11,18) << "\n";

std::cout << "The largest twin prime in range (15,25) is: \n";
std::cout << largestTwinPrime(15,25) << "\n";

  return 0;
}
