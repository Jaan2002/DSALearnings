//LINEAR SEARCH
#include <iostream>

using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        {
          return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10]={12,45,-52,27,-84,14,3,22,-92,1};
    cout<<"Enter the element to search for:";
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found==key){
        cout<<"key is present."<<endl;
    }
    else{
        cout<<"Key is absent."<<endl;
    }

    return 0;
}
