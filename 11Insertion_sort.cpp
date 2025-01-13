#include <iostream>
using namespace std;

void Insertionsort(int arr[], int n)
{

    for (int i = 1; i < n ; i++) // for rounds
    {
        int temp = arr[i];
         int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
                // already swapped no rounds to run further
            }
        }
        arr[j+1] = temp;
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

    Insertionsort(brr, 5);
    Insertionsort(crr, 6);

    printArray(brr, 5);
    printArray(crr, 6);

    return 0;
}
/*

*/