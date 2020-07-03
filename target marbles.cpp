#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t,s=-1,e=-1,j=0,sum=0,set=0;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(set==0 && j<n){
		sum=0;
        for(int i=j;i<n;i++){
            if(sum>t){
                break;
            }
            sum+=a[i];
            if(sum==t){
                set=1;
                s=j;
                e=i;
                break;    
            }
        }
        j++;
    }
	if (set==1){
        cout<<"true"<<endl;
        for(int i=s;i<=e;i++){
            cout<<a[i]<<" ";
        }
    }
    else{
        cout<<"false";
    }
    return 0;
		
    
}
