/*Print the following pattern for the given N number of rows.
Pattern for N = 4

The dots represent spaces.


Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 50

Sample Input 1:
3

Sample Output 1:
      1 
     12
    123
  
Sample Input 2:
4

Sample Output 2:
      1 
     12
    123
   1234*/

------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  #include<iostream>
using namespace std;


int main(){

     int n;
     cin >> n;
    
     int i=1;
     while(i<=n){
         int space=0;
         while(space<n-i){
             cout<<' ';
             space++;
         }
         int j=1;
         int k=1;
         while(j<=i){
             cout<<k;
             j++;
             k++;
         }
         cout << endl;
         i++;
     }
}
    
    


