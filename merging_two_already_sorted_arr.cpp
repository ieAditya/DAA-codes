#include <iostream>
using namespace std;

void display_elements_arr(int x, int *p);

void *merge(int A[], int B[],int m, int n){
    int i,j,k;
    int C[m+n];
    i=j=k=0;
    while(i<m && j<n){
        if(A[i]< B[j]){
            C[k++]=A[i++];
        }
        else{
            C[k++]=B[j++];
        }
    }
    for(; i<m; i++){
        C[k++]=A[i];
    }
    for(;j<n;j++){
        C[k++]=B[j];
    }
    display_elements_arr(m+n, C);
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

int main(){
    int A[5] = {2,10,18,20,23};
    int B[4] = {4,9,19,25};
    display_elements_arr(5, A);
    display_elements_arr(4, B);
    merge(A, B, 5, 4);
    return 0;
}