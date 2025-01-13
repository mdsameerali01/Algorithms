#include <iostream>
using namespace std;

void Bubblesort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n - 1; i++) // for rounds
    {

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
            // already swapped no rounds to run further
        }
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

    Bubblesort(brr, 5);
    Bubblesort(crr, 6);

    printArray(brr, 5);
    printArray(crr, 6);

    return 0;
}