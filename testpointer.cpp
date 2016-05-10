#include <iostream>
#include <vector>
using namespace std;

void changefoo(int **a, int&b) {
	int x = 5;
	int y = 6;

	//a = &x;
	**a = 5;
	b = y;

};

int main(int argc, char const *argv[])
{
	/*vector<int> b (5,5);
	int a;
	int *b;
	a = 5;
	*b = 5;
	cout<<a<<endl;
	cout<<b<<endl;

	cout<<&b<<endl;
	cout<<(*b)<<endl;
	cout<<(*&b)<<endl;
	cout<<(&a)<<endl;
	return 0;
	*/
	int a, b;
	changefoo(&(&a),b);
	cout<<a<<endl;
	cout<<b<<endl;
}

