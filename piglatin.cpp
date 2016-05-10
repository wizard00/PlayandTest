#include <iostream>
#include <string>

using namespace std;
//letter before vowel are placed at the end, + ay
//if starting with vowel, +yay
string pigLatin(string s);
bool isvowel(char c);
int main(int argc, char const *argv[])
{
	cout<<pigLatin("pig")<<endl;
	cout<<pigLatin("eat")<<endl;
	cout<<pigLatin("wa")<<endl;
	return 0;
}

string pigLatin(string s) {
	int n = s.length();
	string res;
	if(isvowel(s[0])){
		res = s+"y";
	}
	else {
		for (int i = 1; i < n; ++i)
		{
			if(isvowel(s[i])){
				res = s.substr(i,n-i)+s.substr(0,i);
				break;
			}
		}
	}	

	res+="ay";
	return res;
}

bool isvowel(char c) {
	char vowel[] = {'a','e','i','o','u'};
	for(int i = 0; i<5; i++){
		if(vowel[i]==c)
			return true;
	}
	return false;
}