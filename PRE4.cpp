#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        s=a[i]+a[n-1-i];
        cout<<ceil(s/10)<<" "<<s%10<<endl;
    }
	return 0;
}
