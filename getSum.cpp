#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + arr[i];
    }
    return sum1;
}

int main(){
    int A[] = {5, 8, 3, 10, 22, 45};
    int N = 6;
    cout<<sum(A, N);
}