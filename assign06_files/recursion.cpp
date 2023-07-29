#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
int tribonacci(int t0, int t1, int t2, int n);
int arrayMax(int arr[], int start, int length);
bool isPrime(int x, int y);
bool isPalindrome(string str, int start, int end);

// test arrays for array function
int test_arr1[10]{13, -4, 22, -9, 3, 17, -1024, 99, 1011, -1};
int test_arr2[13]{-4, -19, 193, 16, -1, -1, -1, 91, 128, 4, 9, 13, -10};

// main calls each test function
int main() {
  string error_msg = "Error, invalid choice. Please pick a number 1-4";
  int functionToTest = -1;

  // print a prompt
  cout << "Which function should be tested?" << endl;
  cout << "(1) tribonacci" << endl;
  cout << "(2) arrayMax" << endl;
  cout << "(3) isPrime" << endl;
  cout << "(4) isPalindrome" << endl;

  // get user's response
  while (functionToTest < 1 || functionToTest > 4) {
    cin >> functionToTest;
    if (cin.fail()) {
      cout << error_msg << endl;
      cin.clear();
      cin.ignore(1024, '\n');
      continue;
    } else if (functionToTest < 1 || functionToTest > 4) {
      cout << error_msg << endl;
    }
  }

  // pick the appropriate test case
  switch (functionToTest) {
  case 1: // tribonacci
    // test 1
    cout << "Calling tribonacci(0, 1, 1, 7), expecting 24..." << endl;
    assert(tribonacci(0, 1, 1, 7) == 24);
    // test 2
    cout << "Calling tribonacci(1, 2, 3, 4), expection 11..." << endl;
    assert(tribonacci(1, 2, 3, 4) == 11);
    // test 3
    cout << "Calling tribonacci(1, 1, 6, 32), "
         << "expecting 397189921..." << endl;
    assert(tribonacci(1, 1, 6, 32) == 397189921);
    cout << "Successfully passed all tribonacci tests!" << endl;
    break;
  case 2: // arrayMax
    // test 1
    cout << "Calling arrayMax(test_arr1, 0, 10), "
         << "expecting 1011..." << endl;
    assert(arrayMax(test_arr1, 0, 10) == 1011);
    // test 2
    cout << "Calling arrayMax(test_arr2, 0, 13), "
         << "expecting 193..." << endl;
    assert(arrayMax(test_arr2, 0, 13) == 193);
    // test 3
    cout << "Calling arrayMax(test_arr1, 0, 4), "
         << "expecting 22..." << endl;
    assert(arrayMax(test_arr1, 0, 4) == 22);
    cout << "Successfully passed all arrayMax tests!" << endl;
    break;
  case 3: // isPrime
    // test 1
    cout << "Calling isPrime(13, 12), expecting true..." << endl;
    assert(isPrime(13, 12));
    // test 2
    cout << "Calling isPrime(121, 120), expecting false..." << endl;
    assert(!isPrime(121, 120));
    // test 3
    cout << "Calling isPrime(44497, 44496), expecting true..." << endl;
    assert(isPrime(44497, 44496));
    cout << "Successfully passed all isPrime tests!" << endl;
    break;
  case 4: // isPalindrome
    // test 1
    cout << "Calling isPalindrome(\"racecar\", 0, 6), "
         << "expecting true..." << endl;
    assert(isPalindrome("racecar", 0, 6));
    // test 2
    cout << "Calling isPalindrome(\"notapalindrome\", 0, 13), "
         << "expecting false..." << endl;
    assert(!isPalindrome("notapalindrome", 0, 13));
    // test 3
    cout << "Calling isPalindrome(\"step on no pets\", 0, 14), "
         << "expecting true..." << endl;
    assert(isPalindrome("step on no pets", 0, 14));
    // test 4
    cout << "Calling isPalindrome(\"noon\", 0, 3), "
         << "expecting true..." << endl;
    assert(isPalindrome("noon", 0, 3));
    // test 5
    cout << "Calling isPalindrome(\"hello\", 0, 4), "
         << "expecting false..." << endl;
    assert(!isPalindrome("hello", 0, 4));
    cout << "Successfully passed all isPalindrome tests!" << endl;
    break;
  }
}

// ---------------------------------------------------------------------
// YOUR CODE GOES HERE
// ---------------------------------------------------------------------

int tribonacci(int t0, int t1, int t2, int n) {
  // This is related to the Fibonacci sequence, which might be easier
  // to think about. Focus on the base case(s), and how to reduce the
  // general case to the base case.

  return 0;
}

int arrayMax(int arr[], int start, int length) {
  // For this function, it might help to think about what length of list
  // finding the maximum value is trivial, and treat that as the base
  // case. Remember, if it's helpful, you can declare extra variables
  // inside of the function which can take different values on each
  // recursive call.

  return 0;
}

bool isPrime(int x, int y) {
  // In this function, the variable `y` is auxilliarly storage, which
  // starts out as `y = x - 1`. Think about the "naive" way we figure
  // out if a number is prime or not, and if there's a way to turn that
  // into a recursive approach rather than iterative.

  return true;
}

bool isPalindrome(string str, int start, int end) {
  // Like arrayMax, it might help to start wtih what the base case is,
  // and figure out how to reduce the general case to the base case.

  return true;
}
