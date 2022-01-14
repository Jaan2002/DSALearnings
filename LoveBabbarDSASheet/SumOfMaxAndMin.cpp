#include<climits>
int sumOfMaxMin(int arr[], int n){
int max = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
       if(arr[i]>max ){
           max=arr[i];
       }
    }
int min = INT_MAX;
    for(int i=0;i<n;i++){
       if(arr[i]<min){
           min=arr[i];
       }
    }
sum=max+min;
return sum;
}
