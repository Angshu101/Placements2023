#include<bits/stdc++.h>
using namespace std;
int* rotate_array(int arr[],int size){
int temp;
temp=arr[size-1];
for(int i=(size-2);i>=0;i--){
    arr[i+1]=arr[i];
}
arr[0]=temp;

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
cin>>N;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
int* p;
p=rotate_array(arr,N);
cout<<"The rotated array is :- "<<endl;
for(int i=0;i<N;i++){
    cout<<p[i]<<" ";
}
delete[] p;
return 0;
}
