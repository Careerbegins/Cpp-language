#include <iostream>
using namespace std;

int searchIndex(int arr[], int N, int key){
    for (int i = 0; i < N; i++)
    {
       if(arr[i]==key){
        cout<<i <<" ";
       }
    }
    
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 5 };
    int N = sizeof(arr)/sizeof(arr[0]);
    int key = 5;
    searchIndex(arr, N, key);
    return 0;      
}
