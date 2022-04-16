#include <iostream>
#include <math.h>
using namespace std;

void set_left(char A[], char key, int p_location)
{
    A[p_location * 2 + 1] = key;
    cout << "\nLocation of " << key << " is A[" << p_location * 2 + 1 << "]";
}

void set_right(char A[], char key, int p_location)
{
    A[p_location * 2 + 2] = key;
    cout << "\nLocation of " << key << " is A[" << p_location * 2 + 2 << "]";
}

void setter(char A[], char key)
{
    int parent;
    int choice;
    cout << "\nLocation of parent: ";
    cin >> parent;
    cout << "\n1.Set at left.\n2.Set at right.\nEnter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        set_left(A, key, parent);
        break;
    case 2:
        set_right(A, key, parent);
        break;
    default:
        cout << "\nInvalid choice.";
        break;
    }
}

void print_tree(char A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] != '\0')
            cout << A[i];
        else
            cout << "-";
    }
}

int main()
{
    int level, size = 0, number_of_elements;
    char key;
    cout << "Enter no. of levels: ";
    cin >> level;
    while (level >= 0)
    {
        size = size + pow(2, level);
        level--;
    }
    char *A = new char[size];
    cout<<"\nMaximum number of elements can be inserted: "<< size;
    cout << "\nEnter number of elements to put: ";
    cin >> number_of_elements;

    cout << "\nEnter root: ";
    cin >> A[0];
    cout << "\nLocation of " << A[0] << " is A[0]";

    while (number_of_elements > 1)
    {
        cout << "\nEnter key: ";
        cin >> key;
        setter(A, key);
        number_of_elements--;
    }

    // print_tree(A, size);

    return 0;
}