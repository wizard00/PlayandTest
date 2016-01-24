#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,pos;
	int count =0;
	cin>>n;
	cin>>m;
	unordered_set<long long int> hash;
	vector<int> ress(n,0);
	vector<long long int> nums(n,0);
	for (int i = 0; i < n; ++i)
	{
		cin>>nums[i];
	}
	for (int i = n-1; i >= 0; i--)
	{
		if(hash.find(nums[i])==hash.end()) {
			hash.insert(nums[i]);
			count++;
			//cout<<nums[i];
		}
		ress[i] = count;
	}

	for (int i = 0; i < m; ++i)
	{
		cin>>pos;
		cout<<ress[pos-1]<<endl;
	}


	return 0;
}