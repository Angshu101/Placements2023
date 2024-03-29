#include<bits/stdc++.h>
using namespace std;
//Kadane's Algorithm VVIIP
int subarray_sum(int arr[],int n){
   int max_len = 1;  // Initialize result
    for (int i=0; i<n-1; i++)
    {
        // Initialize min and max for all subarrays starting with i
        int mn = arr[i], mx = arr[i];
  
        // Consider all subarrays starting with i and ending with j
        for (int j=i+1; j<n; j++)
        {
            // Update min and max in this subarray if needed
            mn = min(mn, arr[j]);
            mx = max(mx, arr[j]);
  
            // If current subarray has all contiguous elements
            if ((mx - mn) == j-i)
                max_len = max(max_len, mx-mn+1);
        }
    }
    return max_len;  // Return result

}

int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
int N;
cin>>N;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
int p;
p=subarray_sum(arr,N);
cout<<"The max Subarray array Sum is of test case is:_ " <<p<<endl;
return 0;
}
