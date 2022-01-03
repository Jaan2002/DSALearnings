/find sum of elements in an array HW2


#include <iostream>

using namespace std;
int getArraysum(int sum[],int size){
    
    int add=0;
   for(int i=0;i<size;i++){
       add=add +sum[i];
   }
   return add;
}
int main()
{
    int n;
    cin>>n;
    int sum[100];
    int i;
   for(i=0;i<n;i++){
       cin>>sum[i];
   }
   cout<<"Sum of elements in an array is:"<<getArraysum(sum,n)<<endl;

    return 0;
}
