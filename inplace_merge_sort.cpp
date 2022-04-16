#include <iostream>
using namespace std;

void display_elements_arr(int A[], int x){
    cout << "| ";
    for (int i = 0; i < x; i++){
        cout << A[i] << " | ";
    }
    cout << endl;
}

void insertion_sort(int A[],int low, int high){
    int i;
    for(i = low+1; i<=high; i++){
        if(A[i]<A[i-1]){
            swap(A[i],A[i-1]);
        }
    } 
}

void sort(int A[], int low, int mid, int high){
    int i,j;
    i=low;
    j= mid+1;
    while(i<=mid && j<=high){
        if(A[i]>=A[j]){
            swap(A[i], A[j]);
            insertion_sort(A,j,high);
            i++;
        }
    }
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
    sort(A,0,size/2-1,size-1); cout<<"After sorting:\n";
    display_elements_arr(A, size);
    return 0;
}