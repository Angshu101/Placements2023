#include<bits/stdc++.h>
using namespace std;
int num(int input2[],int input1){
   int sum=0,position=0;
   for(int i=0;i<input1;i++){
       sum=input2[i]+1;
       if(sum<10)
       input2[i]=sum;
       else
       input2[i]=0;

   }
   for(int i=0;i<input1;i++){
       if(input2[i]!=0)
       position=i+1;
   }
   return position;
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
p=num(arr,N);
cout<<p<<endl;
return 0;
}
