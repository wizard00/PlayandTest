#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 0;
	cin>>n;
	//vector<string> allnum (n,'');
	
	int maxc;
	string cur;
	string maxcommons;
	cin>>cur;
	maxcommons = cur;
	maxc = cur.size();
	for(int i = 1; i<n;i++) {
		cin>>cur;
		for(int j = 0; j<maxc; j++) {
			if(cur[j]!=maxcommons[j]) {
				maxc = j;
			}
		}
	}

	cout<<maxc;
	return 0;
}