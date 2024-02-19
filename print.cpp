#include<iostream>
using namespace std;

int print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
}
int printReverse(int arr[],int n){
    for (int i = n-1; i >= 0; i--)
    {
        cout<<arr[i] <<" ";
    }
}
int main(){
    int A[] = {1,2,3,4,5};
    int N = 5;
    print(A,N);
    cout<<endl;
    printReverse(A,N);
}
