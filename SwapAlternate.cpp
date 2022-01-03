
#include <iostream>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        
    }
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
    swapAlternate(arr,size);
    printArray(arr,size);

    return 0;
}
