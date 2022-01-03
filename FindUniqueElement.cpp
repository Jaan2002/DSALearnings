
#include <iostream>

using namespace std;

int findUnique(int arr[], int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];    //eg 1 2 1 8 2 :=> 1 ^ 2 ^ 1 ^ 8 ^ 2 = 8 // xor property : a ^ a =0 ; 0 ^ a = a
    }
    return ans;
}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    int i;
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
   cout<<findUnique(arr,size);
    

    return 0;
}
