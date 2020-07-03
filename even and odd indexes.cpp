#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even=0,odd=0,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>k;
        a[i]=k;
        odd+=(k%2==1 && i%2==1)?k:0;
        even+=(k%2==0 && i%2==0)?k:0;
    }
    cout<<even<<" "<<odd;
    
	return 0;
}
