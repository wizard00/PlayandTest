#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;


long long int DFS(vector<vector<long long int>> &allcity,long long int curTotal,int a,long long int minpass, int n, unordered_set<int>visited) ;
int main(int argc, char const *argv[])
{
	int n,m,a,b;
	long long int x,curTotal = 0;
	cin>>n;
	cin>>m;
	unordered_set<int>visited;
	vector<vector<long long int>> allcity (n+1,vector<long long int>(n+1,-1));

	for (int i = 0; i < m; ++i)
	{
		cin>>a;
		cin>>b;
		cin>>x;	
		if(allcity[a][b]==-1 || x<allcity[a][b])	
			allcity[a][b] = x;

	}
/////////finished grabbing datas/////////////
	//cout<<"test"<<endl;

	long long int res = DFS(allcity,curTotal,1,-1,n,visited);
	cout<<res;
	return 0;

}

long long int DFS(vector<vector<long long int>> &allcity,long long int curTotal,int a,long long int minpass, int n, unordered_set<int>visited) {
	long long int cur = 0;
	long long int min = -1;
	visited.insert(a);
	if(a==n)
		return curTotal;
	if(minpass!=-1&&curTotal>=minpass)
		return -1;
	for(int i = 1; i<=n; i++) {
		if(allcity[a][i]!=-1) {
			//cout<<allcity[a][i];
			if(visited.find(i)==visited.end()) {
				//visited.insert(i);
				cur = DFS(allcity,curTotal+allcity[a][i],i,min,n,visited);
				if(min==-1||cur<min){
					//cout<<cur<<" ";
					min = cur;
				}
				//min = (min==-1||cur<min)?cur:min;
			}
		}
	}
	return min;

}










