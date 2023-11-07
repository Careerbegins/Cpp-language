#include <iostream>
using namespace std;

int searchIndex(int arr[6]){
    int N = 6;
    int key = 5;
    for (int i = 0; i < N; i++)
    {
       if(arr[i]==key){
        cout<<i <<" ";
        break;
       }
    }
    for (int i = N; i >= 0; i--)
    {
        if(arr[i]==key){
        cout<<i <<" ";
        break;
       }
    }
    
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 5 };
    searchIndex(arr);
    return 0;      
}
