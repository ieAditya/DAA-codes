#include <iostream>
using namespace std;

void display_elements_arr(int x, int *p);

void ToDo()
{
    cout << "1.Insert Element.\n2.Delete Element.\n3.Seperate Odd Even.\n4.Sum of all elements.\n"
         << "5.Average of all elements.\n6.Display Max & Min.\n7.Reverse of array.\n8.Display arr.\n9.Exit.\n";
}

int *Insert_Element(int size, int arr[])
{
    int element, position;
    cout << "Enter the value to be added: ";
    cin >> element;
    cout << "Enter the position: ";
    cin >> position;
    for (int i = size - 1; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    return arr;
}

int *Delete_Element(int size, int arr[])
{
    int position, number_to_delete, choice;
    cout << "What to do: \n1. Delete element at a given position. \n2. Search and delete a number.";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter position to delete: ";
        cin >> position;
        for (int i = position; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
            cout << i << endl;
        }
    }

    else if (choice == 2)
    {
        cout << "Enter number to search and delete: ";
        cin >> number_to_delete;
        for (int i = 0; i <= size; i++)
        {
            if (arr[i] == number_to_delete)
            {
                for (int j = i; j <= size; j++)
                {
                    arr[j] = arr[j + 1];
                }
            }
        }
    }
    return arr;
}

void *Seperate_Odd_Even(int arr[], int size)
{
    int No_Of_Evens = 0, No_Of_Odds = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            No_Of_Evens++;
        }
        else
        {
            No_Of_Odds++;
        }
    }
    int even_arr[No_Of_Evens], odd_arr[No_Of_Odds], j = 0, k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_arr[j] = arr[i];
            j++;
        }
        else
        {
            odd_arr[k] = arr[i];
            k++;
        }
    }
    cout << "Even:\n";
    display_elements_arr(j, even_arr);
    cout << "\n\nOdd:\n";
    display_elements_arr(k, odd_arr);
    cout << endl;
}

void Sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "\n Sum = " << sum << endl;
}

void Average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "\n Average = " << sum / size << endl;
}

void MaxMin(int arr[], int size)
{
    int max = arr[1], min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Maximum = " << max;
    cout << "\nMinimum = " << min << endl;
}

void Reverse(int arr[], int size)
{
    cout << "\nArray in reverse order:\n";
    cout << "| ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " | ";
    }
    cout << endl;
}

void display_elements_arr(int x, int *p)
{
    cout << "| ";
    for (int i = 0; i < x; i++)
    {
        cout << *p << " | ";
        *p++;
    }
    cout << endl;
}

void RandomNumFill(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 10 + (rand() % 90);
    }
}

int main()
{
    int n, choice;
    cout << "Enter the size of an array : ";
    cin >> n;

    int *arr = new int(n);
    RandomNumFill(arr, n);

    display_elements_arr(n, arr);

    ToDo();

    while (choice != 8)
    {
        cout << "\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Insert_Element(n, arr);
            break;
        case 2:
            Delete_Element(n, arr);
            break;
        case 3:
            Seperate_Odd_Even(arr, n);
            break;
        case 4:
            Sum(arr, n);
            break;
        case 5:
            Average(arr, n);
            break;
        case 6:
            MaxMin(arr, n);
            break;
        case 7:
            Reverse(arr, n);
            break;
        case 8:
            display_elements_arr(n, arr);
            exit(0);
            break;
        case 9:
            exit(0);
            break;
        default:
            cout << "INVALID CHOICE!!";
        }
    }

    return 0;
}