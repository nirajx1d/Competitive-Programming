#include <bits/stdc++.h>
#include <unordered_map>
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef vector<ii> vii; 
typedef vector<vii> vvii;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		unordered_map<string,int> m;
		for(int i=0;i<s.size();i++){
			for(int j=0,k=i;k<s.size();k++,j++){
				string t = s.substr(j,k-j+1);
				m[t]=1;
			}
		}
		cout<<m.size()<<endl;
	}
}
