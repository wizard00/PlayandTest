#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool ishello(string x, int i );
bool isworld(string x, int i );
int main(int argc, char const *argv[])
{
	string inputs;
	int count = 0;
	cin>>inputs;
	vector<int> hellos (inputs.size(),0);
	vector<int> worlds (inputs.size(),0);
	if(inputs.size()<10) {
		cout<<0;
		return 0;
	}
	long long int res = 0;
	for(int i = 4; i<inputs.size(); i++) {
		if(ishello(inputs,i)) {
			hellos[i] = 1;
		}
		else
			hellos[i] = 0;
	}

	for(int i = inputs.size()-1-5; i>=0; i--) {
		if(isworld(inputs,i)) {
			count++;
			worlds[i] = count;
		}
		else
			worlds[i] = worlds[i+1];
	}

	for (int i = 0; i < inputs.size(); ++i)
	{
		if(hellos[i] == 1) {
			res += worlds[i];
		}
	}
	cout<<res;
	return 0;
}

bool ishello(string x, int i ) {
	return x.substr(i-4,5) =="hello";
}

bool isworld(string x, int i ) {
	return x.substr(i+1,5) =="world";

}

