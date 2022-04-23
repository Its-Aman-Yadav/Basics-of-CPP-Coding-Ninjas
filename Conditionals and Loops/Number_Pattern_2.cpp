/*Print the following pattern
Pattern for N = 4
    1
   23
  345
 4567
 
Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Sample Input :
5
Sample Output :
    1
   23
  345
 4567
56789
*/

---------------------------------------------------------------------------------------------------------------------------------------------------------
  
int n,x,k,j;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(j=n;j>i;j--){
            cout << " ";
        }
        x=i;
        for( k=1;k<=i;k++){
           cout << x;
            x++;
        }
        cout << endl;
    }
