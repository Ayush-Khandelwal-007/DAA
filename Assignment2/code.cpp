#include<iostream>
#include<math.h>
using namespace std;
int n,k;
int subsetXOR(int arr[])
{
    int max_ele = arr[0];
    for (int i=1; i<n; i++)
       if (arr[i] > max_ele)
           max_ele = arr[i];
 
    int m = (1 << (int)(log2(max_ele) + 1) ) - 1;
    if( k > m  )
       return 0;
    int dp[n+1][m+1];
    for (int i=0; i<=n; i++)
        for (int j=0; j<=m; j++)
            dp[i][j] = 0;
    dp[0][0] = 1;
 
    // Fill the dp table
    for (int i=1; i<=n; i++)
        {
            for (int j=0; j<=m; j++)
            dp[i][j] = dp[i-1][j] + dp[i-1][j^arr[i-1]];
        }
 
    //  The answer is the number of subset from set
    //  arr[0..n-1] having XOR of elements as k
    return dp[n][k];
}
 
// Driver program to test above function
int main()
{
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter value of K"<<endl;
    cin>>k;
    cout << "Count of subsets is " << subsetXOR(arr);
    
}