Q! 1//find min and max no in array

#include <iostream>
#include <climits>
using namespace std;
int getMax(int arr[],int n){

//INT_MIN means min value(-2^31)  of int range [ (-(2)^31 ) to (2)^31-1 ]  and INT_MAX means max value ((2)^31-1) of int range 
    //Method1:
    int max= INT_MIN;                                    
    for(int i=0;i<n;i++){
       if(arr[i]>max){
           max=arr[i];
       }
    }
    return max;
 //Method2:
                      //   int maxi= INT_MIN;
                       //predefine function of maximum number is max()
                         //maxi = max(maxi,arr[i]);
                           //return maxi;
}
int getMin(int arr[],int n){
//Method1:
 int min= INT_MAX;
    for(int i=0;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
       
    }
    return min;
   //Method2:                 //   int mini= INT_MIN;
                                  //predefine function of minimum number is min()
                                    //mini = min(mini,arr[i]);
                                       //return mini;
}
int main()
{
   int size;
   cin>>size;
  // int arr[size]; --this bad intialize
  int arr[100];
  int i;
   for(i=0;i<size;i++){
       cin>>arr[i];
   }
   
   cout<<"Maximum number is:"<<getMax(arr,size)<<endl;
   
   cout<<"Minimum number is:"<<getMin(arr,size)<<endl;
    return 0;
}
