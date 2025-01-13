#include <iostream>
using namespace std;

void Selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int brr[] = {65, 25, 12, 22, 11};
    int crr[] = {6, 5, 4, 3, 2, 1};

    Selectionsort(brr, 5);
    Selectionsort(crr, 6);

    printArray(brr, 5);
    printArray(crr, 6);

    return 0;
}

/*
TIME COMPLEXITY


*/