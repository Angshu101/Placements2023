#include<bits/stdc++.h>
using namespace std;
int* subarray_sum(int arr[],int size){


return arr;
}
int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
int N;
cout<<"Enter the siz of the array";
cin>>N;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
int* p;
p=subarray_sum(arr,N);
cout<<"The rotated array is :- "<<endl;
for(int i=0;i<N;i++){
    cout<<p[i]<<" ";
}
delete[] p;
return 0;
}
