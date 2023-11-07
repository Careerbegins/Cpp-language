#include<iostream>
using namespace std;

int print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
        i++;
    }
}
int main(){
    int A[] = {1,2,3,4,5};
    int N = 5;
    print(A,N);
}