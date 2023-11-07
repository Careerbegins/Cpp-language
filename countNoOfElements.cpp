#include<iostream>
using namespace std;

int count(int A[6], int x){
    for (int i = 0; i < 6; i++)
    {
        if (A[i]>=x)
        {
            cout<<i-1;
        }
        
    }
    
}

int main(){
    int A[] = {1, 2, 4, 5, 8, 10};
    int X = 9;
    count(A, X);
}