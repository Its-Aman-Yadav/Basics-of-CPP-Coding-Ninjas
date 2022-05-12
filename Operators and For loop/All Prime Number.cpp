/*Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

Input Format :
Integer N

Output Format :
Prime numbers in different lines

Constraints :
1 <= N <= 100

Sample Input 1:
9

Sample Output 1:
2
3
5
7

Sample Input 2:
20

Sample Output 2:
2
3
5
7
11
13
17
19*/

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include <bits/stdc++.h>
using namespace std;
 
// function check whether a number
// is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
// Function to print primes
void printPrime(int n)
{
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
            cout << i <<endl;
    }
}
// Driver Code
int main()
{
    int n; cin>>n;;
    printPrime(n);
}
