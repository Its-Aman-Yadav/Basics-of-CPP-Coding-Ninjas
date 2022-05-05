/*Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100

Sample Output 1 :
12

Sample Input 2 :
111

Sample Output 2 :
7*/

---------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  
// convert binary to decimal

#include <iostream>
#include <cmath>

using namespace std;

// function prototype
int convert(long long);

int main() {
  long long n;
  cin >> n;
  cout << convert(n) ;
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
