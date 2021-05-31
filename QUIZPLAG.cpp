#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k,id;
    cin>>n>>m>>k;
    int map[n+m+1]={0};
    for(int i=1; i<=k; i++){
        cin>>id;
        map[id]++;
    }
    vector<int> ans;
    for(int i=1 ;i<=n; i++){
        if(map[i]>1){
            ans.push_back(i);
        }
    }
    int size = ans.size();
    cout<<size;
    for(int i=0; i<size; i++){
        cout<<" "<<ans[i];
    }
    cout<<"\n";
}

int main() {
    int t; 
    cin>>t;
    while(t--){
        solve();
    }
	// your code goes here
	return 0;
}
