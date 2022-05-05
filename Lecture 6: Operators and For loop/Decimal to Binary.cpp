/*Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.

Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.

Input format :
Integer N

Output format :
Corresponding Binary number (long)

Constraints :
0 <= N <= 10^5

Sample Input 1 :
12

Sample Output 1 :
1100

Sample Input 2 :
7

Sample Output 2 :
111*/

------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  
#include <iostream>
using namespace std;

int main() {
  long long decimal, binary = 0, remainder, product = 1;
  cin >> decimal;
  while (decimal != 0) {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
  cout << binary ;
  return 0;
}
