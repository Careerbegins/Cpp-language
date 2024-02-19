#include<iostream>
using namespace std;

int count(int A[], int x, int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if (A[i]==x)
        {
            ans +=1;
        }
        
    }
    cout<<ans;
    return ans;
    
}

int main(){
    int A[] = {1, 2, 4, 5, 4, 8,4,4,4, 10};
    int X = 4;
    int n = sizeof(A)/sizeof(A[0]);
    count(A, X, n);
}
