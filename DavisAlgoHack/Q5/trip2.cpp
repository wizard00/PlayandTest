#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

struct City
{
	vector<int> nexts;
	vector<long long int> price;

	City(){
		//nexts = new vector<City*>();
		//price = new vector<long long int>();
	}
};
long long int DFS(vector<City*> &allcity,long long int curTotal,int a, int n, unordered_set<int>visited);
int main(int argc, char const *argv[])
{
	int n,m,a,b;
	long long int x,curTotal = 0;
	cin>>n;
	cin>>m;
	unordered_set<int>visited;
	vector<City*> allcity(n+1,NULL);
	for (int i = 0; i < m; ++i)
	{
		cin>>a;
		cin>>b;
		cin>>x;		
		if(allcity[a]==NULL) {
			allcity[a] = new City();
		}
		(allcity[a]->nexts).push_back(b);
		(allcity[a]->price).push_back(x);

	}
/////////finished grabbing datas/////////////
	//cout<<"test"<<endl;
	if(allcity[1]==NULL) {
		cout<<-1;
		return 0;
	}
	long long int res = DFS(allcity,curTotal,1,n,visited);
	cout<<res;
	return 0;

}

long long int DFS(vector<City*> &allcity,long long int curTotal,int a, int n, unordered_set<int>visited) {
	long long int cur = 0;
	long long int min = -1;
	if(a==n)
		return curTotal;
	for(int i=0; i<(allcity[a]->nexts).size(); i++) {
		if(visited.find((allcity[a]->nexts)[i])==visited.end()) {
			visited.insert((allcity[a]->nexts)[i]);
			cur = DFS(allcity,curTotal+(allcity[a]->price)[i],(allcity[a]->nexts)[i],n,visited);
			min = (min==-1||cur<min)?cur:min;
		}
	}
	return min;
}










