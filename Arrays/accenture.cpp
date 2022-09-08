#include<bits/stdc++.h>
using namespace std;
//Kadane's Algorithm VVIIP
int subarray_sum(int input1,int input2[]){
  int 

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
p=subarray_sum(N,arr);
cout<<"The max Subarray array Sum is of test case is:_ " <<p<<endl;
return 0;
}