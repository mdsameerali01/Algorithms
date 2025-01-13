#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;  // why?

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // shifting to right side part
        if (key > arr[mid])
        {
            start = mid + 1;
        } // shifting to left side part
        else
        {
            end = mid - 1;
        }
         mid = start + (end - start) / 2;
       
    }
     return -1;
}    

    int main()
    {

        int even[8] = {2, 4, 6, 7, 9, 10, 15, 18};
        int odd[7] = {2, 3, 5, 7, 9, 10, 66};

        int evenindex = BinarySearch(even, 8, 9);
        int oddindex = BinarySearch(odd, 7, 5);
        cout << "Search Completed Successfully with evenindex " << evenindex << endl;
        cout << "Search Completed Successfully with oddindex " << oddindex << endl;

        return 0;
    }