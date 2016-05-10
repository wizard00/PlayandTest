//author: Yufei Wang
//Please compile this with c++11 option like below:
//g++ -std=c++11 interviewQ.cpp

#include <iostream>
#include <stack>
using namespace std;

bool validBracket(string s);

int main(int argc, char const *argv[])
{
	//below are some simple cases I tested;
	//result should be 1011100001
	cout<<validBracket(" ")<<endl;//true
	cout<<validBracket("]")<<endl;//false
	cout<<validBracket("{ }")<<endl;//true
	cout<<validBracket("{}{}")<<endl;//true
	cout<<validBracket("{()}[]")<<endl;//true
	cout<<validBracket("{(})")<<endl;//false
	cout<<validBracket("(")<<endl;//false
	cout<<validBracket("(((((([]]))))))")<<endl;//false
	cout<<validBracket("(()()))(()")<<endl;//false
	cout<<validBracket("(wa[x]test){true?}")<<endl;//true
	return 0;
}

bool validBracket(string s) {
	stack<char> lefts; //left brackets
	for (char c:s) {
		if (c == '}') {
			if (lefts.empty() || lefts.top() != '{') {
				return false;
			}
			lefts.pop();
		}
		else if (c == ')') {
			if (lefts.empty() || lefts.top() != '(') {
				return false;
			}
			lefts.pop();
		}
		else if (c == ']') {
			if (lefts.empty() || lefts.top() != '[') {
				return false;
			}
			lefts.pop();
		}
		else if (c == '(' || c == '[' || c == '{') {
			lefts.push(c);
		}
	}

	return lefts.empty();
}