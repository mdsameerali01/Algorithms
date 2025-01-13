#include<iostream>
using namespace std;

int getmin(int arr[], int size){
   int mini = INT8_MAX;
   for(int i=0; i<size; i++){
      mini = min(mini, arr[i]);
   }
   return mini;
}
int getmax(int arr[], int size){
   int maxi = INT8_MIN;
   for(int i=0; i<size; i++){
      maxi = max(maxi, arr[i]);
   }
   return maxi;
}

int main(){

int arr[100];
int size;
cout<<"enter the size of array"<<endl;
cin>>size;

cout<<"enter the array"<<endl;
for(int i=0; i<size; i++){
   cin>>arr[i];
}
cout<<"The maximum element is "<<getmax(arr, size)<<endl;
cout<<"The minimum element is "<<getmin(arr, size)<<endl;
return 0;
}