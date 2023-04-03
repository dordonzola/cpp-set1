#include <iostream>
using namespace std;

unsigned long long fib (unsigned long long n) //iteracyjnie
{
    if (n==0 || n==1)
        return 1;
    unsigned long long result,first=0,second=1;
    for (unsigned long long i=2; i<=n;++i)
    {
        result=first+second;
        first=second;
        second=result;
    }
    return result;
}


int main() {
    unsigned long long k = 80;
    for (unsigned long long i=1; i<=k; ++i)
    {
        cout << fib(i) << endl;
    }

    return 0;
}