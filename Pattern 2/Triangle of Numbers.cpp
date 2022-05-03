/*Print the following pattern for the given number of rows.
Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
           1
         232
       34543
     4567654
   567898765
   
Sample Input 2:
4

Sample Output 2:
           1
         232
       34543
     4567654*/

------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j, num = 1, gap;
	cin>>n;
	gap = n - 1;

	for ( j = 1 ; j <= n ; j++ )
	{
		num = j;
		for ( i = 1 ; i <= gap ; i++ )
			cout << " ";

		gap --;
		for ( i = 1 ; i <= j ; i++ )
		{
			cout << num;
			num++;
		}
		
		num--;
		num--;
		for ( i = 1 ; i < j ; i++)
		{
			cout << num;
			num--;
		}
		cout << "\n";
	}
	return 0;
}
