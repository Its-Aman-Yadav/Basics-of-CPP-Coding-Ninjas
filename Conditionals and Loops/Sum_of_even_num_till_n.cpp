/*
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/

---------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){
        int n,sum=0;
        cin>>n;
        for (int i=0; i<=n ; i++){
            if (i%2==0){
                sum = sum+i;
            }
        }

        cout<<sum;
return 0;

}
