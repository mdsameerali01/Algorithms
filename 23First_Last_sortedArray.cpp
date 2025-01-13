#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int k){
    int s=0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid-1;
        }
        else if(k > arr[mid]){
           s = mid+1;
        }
        else if(k < arr[mid]){
            e = mid -1;
        }
         int mid = s+(e-s)/2;
        
    }
    return ans;
}
int lastOcc(int arr[], int n, int k) {
    int s=0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s=mid+1;
        }
        else if(k > arr[mid]){
           s = mid+1;
        }
        else if(k < arr[mid]){
            e = mid -1;
        }
         int mid = s+(e-s)/2;
        
    }
    return ans;
}
int main() {
  int arr[10] = {1,2,2,2,2,25,8,9,5,6};
cout<<" First Index is "<<firstOcc(arr, 10, 2)<<" last Index is "<<lastOcc(arr, 10, 2);
    return 0;
}