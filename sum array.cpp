#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s+=(i==0||j==0||i==n-1||j==n-1||i==j||i+j==n-1)?arr[i][j]:0;
        }
    }
    for(int i=0;i<n;i++){
        delete arr[i];
    }
    delete[] arr;
    cout<<s;
    
	return 0;
}
