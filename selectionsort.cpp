#include<iostream>
using namespace std;

void selectionSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
                 
            }    
            swap(A[i], A[minIndex]);
        }
    }
}

void displayarray(int A[],int n)
{
    cout<<"The array elements are:\n";
    for(int i =0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"the size of the array:";
    cin>>n;
    int A[n];
    cout<<"Enter Array Elemnts :\n";
    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }
    displayarray(A,n);
    
    selectionSort(A,n);
    displayarray(A,n);
    return 0;
}