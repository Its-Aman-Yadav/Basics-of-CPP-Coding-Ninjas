/*
Print the following pattern
Pattern for N = 4
1
23
345
4567

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/

------------------------------------------------------------------------------------------------------------------------------------------------------
  

#include <iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
    int i = 1, j;
	int num;
    
	while (i <= n) {
       
        j=1;
        num=i;
		while (j <= i) {
			cout << num << "";
			num++;
			j++;
		}
        cout << endl;
		i++;
		
	}
	return 0;
}
