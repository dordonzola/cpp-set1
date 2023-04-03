#include <iostream>

using namespace std;

unsigned long long fib(unsigned long long n) //rekurencyjnie
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}


int main() {
    unsigned long long k = 80;
    for (unsigned long long i=1; i<=k; ++i)
    {
        cout << fib(i) << endl;
    }

    return 0;
}
