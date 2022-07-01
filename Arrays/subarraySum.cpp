#include<bits/stdc++.h>
using namespace std;
//Kadane's Algorithm VVIIP
long long subarray_sum(int arr[],int size){
 long long Sum=0;
 long long max=arr[0];
 for(int i=0;i<size;i++){
     Sum=0;
  for(int j=i;j<size;j++){
      Sum+=arr[j];
      if(Sum>max)
      max=Sum;
  }
 }
 return max;
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
long long p;
p=subarray_sum(arr,N);
cout<<"The max Subarray array Sum is of test case is:_ " <<p<<endl;
return 0;
}
