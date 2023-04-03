#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char first[30],second[30];
    cout<<"Wprowadz pierwszy ciag:";
    cin>>first;
    cout<<"Wprowadz drugi ciag:";
    cin>>second;

    if( stricmp( first, second ) == 0 )
        cout<< "Ciagi sa rowne.\n";
    else
        cout<<"Ciagi nie sa rowne.\n";

    return 0;
}