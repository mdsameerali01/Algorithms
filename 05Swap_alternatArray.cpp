// swap alternate
// arr[5] = {1,2,7,8,5}-----> {2,1,8,7,5}
// arr[6]={1,2,3,4,5,6}------> {2,1,4,3,6,5}

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
       if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);   
        }
    }
}

int main()
{
    int even[8] = {4, 5, 7, 2, 7, 1, 9, 4};
    int odd[5] = {2, 7, 4, 6, 1};

    swapAlternate(even, 8);
    printArray(even, 8);
    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}
// swap
/*
temp=a[1]
a[1]=a[0]
a[1]=temp
*/