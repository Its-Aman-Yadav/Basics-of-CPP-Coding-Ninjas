/*Print the following pattern for the given number of rows.
Input format :

N (Total no. of rows and can only be odd)
Output format :

Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5

Sample Output 1:
  *
 ***
*****
 ***
  *
  
Sample Input 2:
3

Sample Output 2:
  *
 ***
  **/

---------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1;
    while(i<=(n/2+1))
    {
        int j=1;
        int k=n/2+1;//k=n
        while(j<=(k-i))
        {
            cout<<" ";
            j++;     
        }
        j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        j=i-1;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
        i++;
        cout<<endl;
    }
    i=1;
    while(i<=n/2)
    {
        int j=1;
        while(j<=i)
        {
            cout<<" ";
            j++;
        }
        j=n/2-i+1;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
        j=n/2-i;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
        i++;
        cout<<endl;
    }
    
}
