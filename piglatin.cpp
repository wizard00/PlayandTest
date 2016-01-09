#include <iostream>
#include <string>

using namesapce std;
//letter before vowel are placed at the end, + ay
//if starting with vowel, +yay

int main(int argc, char const *argv[])
{
	/* code */
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