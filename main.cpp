#include <iostream>
#include <cstdlib>
#include <climits>
#include <string>
#include <fstream>
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

  std::cout << "Task A: Is 45 divisible by 8: \n";
  if(isDivisibleBy(45,8) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }
  
  //Task B
  std::cout << "Task B: Is 5 a prime: \n";
  if(isPrime(5) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Task B: Is 10 a prime: \n";
  if(isPrime(10) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Task B: Is 15 a prime: \n";
  if(isPrime(15) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }

  std::cout << "Task B: Is 17 a prime: \n";
  if(isPrime(17) == true){
    std::cout << "Yes \n";
  }
  else{
    std::cout << "No \n";
  }
//Task C
std::cout << "Task C: The next prime from 10 is: \n";
std::cout << nextPrime(10) << "\n";

std::cout << "Task C: The next prime from 24 is: \n";
std::cout << nextPrime(24) << "\n";


//Task D
std::cout << "Task D: The number of primes in range (3,15) is: \n";
std::cout << countPrimes(3,15) << "\n";

std::cout << "Task D: The number of primes in range (15,35) is: \n";
std::cout << countPrimes(15,45) << "\n";

//Task E
std::cout << "Task E: Is 5 a twin prime: \n";
if(isTwinPrime(5) == true){
  std::cout << "Yes \n";
}
else{
  std::cout << "No \n";
}

std::cout << "Task E: Is 9 a twin prime: \n";
if(isTwinPrime(9) == true){
  std::cout << "Yes \n";
}
else{
  std::cout << "No \n";
}


//Task F
std::cout << "Task F: The next twin prime from 8 is: \n";
std::cout << nextTwinPrime(8) << "\n";

std::cout << "Task F: The next twin prime from 22 is: \n";
std::cout << nextTwinPrime(22) << "\n";

std::cout << "Task F: The next twin prime from 49 is: \n";
std::cout << nextTwinPrime(49) << "\n";

//Task G
std::cout << "Task G: The largest twin prime in range (1,15) is: \n";
std::cout << largestTwinPrime(1,15) << "\n";

std::cout << "Task G: The largest twin prime in range (11, 28) is: \n";
std::cout << largestTwinPrime(11,28) << "\n";

std::cout << "Task G: The largest twin prime in range (15,45) is: \n";
std::cout << largestTwinPrime(15,45) << "\n";

  return 0;
}
