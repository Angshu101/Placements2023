#include<bits/stdc++.h>
using namespace std;
//Kadane's Algorithm VVIIP
// Initialize:
//     max_so_far = INT_MIN
//     max_ending_here = 0

// Loop for each element of the array
//   (a) max_ending_here = max_ending_here + a[i]
//   (b) if(max_so_far < max_ending_here)
//             max_so_far = max_ending_here
//   (c) if(max_ending_here < 0)
//             max_ending_here = 0
// return max_so_far
// Explanation: 
// The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this). And keep track of the maximum sum contiguous segment among all positive segments (max_so_far is used for this). Each time we get a positive-sum compare it with max_so_far and update max_so_far if it is greater than max_so_far
int kadanes_algo(int arr[],int size){
    int max_so_far=INT_MIN,max_ending_here=0;
    for(int i=0;i<size;i++){
        max_ending_here=max_ending_here+arr[i];

        if(max_so_far<max_ending_here)
        max_so_far=max_ending_here;

        if(max_ending_here<0)
        max_ending_here=0;
    }

 return max_so_far;
 
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
p=kadanes_algo(arr,N);
cout<<"The max Subarray array Sum is:- "<<p<<endl;
return 0;
}
