#include <iostream>
using namespace std;


int main() {
    char answer='t';
    unsigned long long k,prev=2,maxi=0,results[100];
    results[0] = 0;
    results[1] = 1;

    while (answer=='t')
    {
        cout << "Numer wyrazu ciagu:";
        cin >> k;

        if (k<=maxi)
        {
            cout<<results[k];
        }
        else
        {
            for (auto i=prev ; i <= k; ++i)
            {
                results[i] = results[i - 1] + results[i - 2];
            }
            cout<<results[k]<<"\n";
        }

        cout << "Czy chcesz wyliczyc kolejne wartosci?(t/n)\n";
        cin >> answer;
        while(answer!='n' && answer!='t')
        {
            cout<<"Bledne dane!\n";
            cin>>answer;
        }
        prev=k;
        maxi=max(maxi,k);
    }

    return 0;
}

