#include <iostream>
using namespace std;

void display_elements_arr(int A[], int x);

void sort(int A[], int low, int mid, int high){
    int i,j,k;
    int B[high-low+1];
    i=k=low;
    j= mid+1;
    while(i<=mid && j<=high){
        if(A[i]<=A[j]){
            B[k++] = A[i++];
        }
        else{
            B[k++] = A[j++];
        }
    }
    for(;i<=mid; i++){
        B[k++] =A[i];
    }
    for(; j<=high; j++){
        B[k++] = A[j];
    }
    for(i=0;i<=high;i++){
        A[i] = B[i];
    }
    display_elements_arr(B,high+1);
}

void display_elements_arr(int A[], int x)
{
    cout << "| ";
    for (int i = 0; i < x; i++)
    {
        cout << A[i] << " | ";
    }
    cout << endl;
}

void passer(int A[], int size){
    int low, mid, high;
    low = 0;
    mid = (size/2)-1;
    high = size-1;
    sort(A,low,mid,high);
}

void fill_array(int A[], int size){
    int i;
    for(int i =0; i<size; i++){
        cout<<"Enter data at position "<<i<<" : ";
        cin>>A[i];
    }
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int *A = new int(size);
    fill_array(A, size);
    display_elements_arr(A, size);
    passer(A,size);
    display_elements_arr(A, size);
    return 0;
}

// #include <iostream>
// using namespace std;

// void display_elements_arr(int A[], int x);

// void sort(int A[], int low, int mid, int high){
//     int i,j,k;
//     int B[high-low+1];
//     i=k=low;
//     j= mid+1;
//     while(i<=mid && j<=high){
//         if(A[i]<=A[j]){
//             B[k++] = A[i++];
//             // cout<<"\n i = "<<i<<endl;
//         }
//         else{
//             B[k++] = A[j++];
//             // cout<<"\n j = "<<j<<endl;
//         }
//     }
//     for(;i<=mid; i++){
//         B[k++] =A[i];
//     }
//     for(; j<=high; j++){
//         B[k++] = A[j];
//     }
//     for(i=0;i<=high;i++){
//         A[i] = B[i];
//     }
//     display_elements_arr(B,high+1);
// }

// void display_elements_arr(int A[], int x)
// {
//     cout << "| ";
//     for (int i = 0; i < x; i++)
//     {
//         cout << A[i] << " | ";
//     }
//     cout << endl;
// }

// void passer(int A[], int size){
//     int low, mid, high;
//     low = 0;
//     mid = (size/2)-1;
//     high = size-1;
//     sort(A,low,mid,high);
// }

// void fill_array(int A[], int size){
//     int i;
//     for(int i =0; i<size; i++){
//         cout<<"Enter data at position "<<i<<" : ";
//         cin>>A[i];
//     }
// }

// int main(){
//     int size;
//     cout<<"Enter size: ";
//     cin>>size;
//     int *A = new int(size);
//     fill_array(A, size);
//     display_elements_arr(A, size);
//     passer(A,size);
//     display_elements_arr(A, size);
//     return 0;
// }