#include <math.h>
#include <iostream>
using namespace std;

bool isPowerOfThree(int n);
int main(int argc, char const *argv[])
{
	
	cout<<isPowerOfThree(243);

	return 0;
}


    bool isPowerOfThree(int n) {
        if(n == 1)
            return true;
        double logs;
        logs = log((double)n)/log(3);
        cout<<fmod(logs,1)<<endl;
        cout<<(fmod(logs,1)==1)<<endl;
        cout<<logs<<endl;
        cout<<(int)logs<<endl;
        return (int)logs==logs;
    }
