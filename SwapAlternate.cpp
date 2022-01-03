
#include <iostream>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swapAlternate(int arr[],int n){
    //int temp;
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);//inbuild swap function
            
            /*if inbuild swap function is not working then swap manually like this
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            */
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
