#include <iostream>
using namespace std;

void display_elements_arr(int A[], int x)
{
    cout << "| ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " | ";
    }
    cout << endl;
}

void heapify(int A[], int i, int size)
{
    int left = 2 * i + 1;
    int r = 2 * i + 2;

    int largest = i;

    if (left < size && A[i] < A[left])
        largest = left;
    else if (r < size && A[largest] < A[r])
        largest = r;

    if (largest != i)
    {
        swap(A[i], A[largest]);
        heapify(A, largest, size);
    }
}

void sort(int A[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        swap(A[0], A[i]);
        heapify(A, 0, i);
    }
}

void fill_array(int A[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data at position " << i << " : ";
        cin >> A[i];
    }
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *A = new int(size);
    fill_array(A, size);
    int i;
    for (i = (size / 2) - 1; i >= 0; i--)
    {
        heapify(A, i, size);
    }
    display_elements_arr(A, size);
    return 0;
}