#include <iostream>
using namespace std;

void Xtream(int point[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        cout << point[start] << " ";
        cout << point[end] << " ";
        start++;
        end--;
    }

    // Handle middle element for odd size
    if (start == end)
    {
        cout << point[start];
    }
}

int main()
{
    int point[100];
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> point[i];
    }

    Xtream(point, size);

    return 0;
}