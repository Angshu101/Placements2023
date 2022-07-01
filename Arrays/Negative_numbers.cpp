#include<bits/stdc++.h>
using namespace std;
//Question:- Move all the negative elements to one side of the array 
//KIND OF Segrating Even and odd 3 way partitioning algorithm or dutch national flag two pointer approach
#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b);
void segregate_array(int arr[],int size){
    /* Initialize left and right indexes */
    int left = 0, right = size-1;
    while (left < right)
    {
        /* Increment left index while we see Negative at left (that means logic is implemented here)*/
        while (arr[left]< 0 && left < right)
            left++;
 
        /* Decrement right index while we see Positive at right */
        while (arr[right]>0 && left < right)
            right--;
 
        if (left < right)
        {
            /* Swap arr[left] and arr[right]*/
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }

}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
int N;
cout<<"Enter the size of the array";
cin>>N;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
segregate_array(arr,N);
 cout <<"Array after segregation ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
return 0;
}


