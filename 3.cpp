#include <iostream>
#include <cctype>

using namespace std;


int main() {
    string word, word2;

    cout<<"Wprowadz ciag znakow:";
    getline(cin,word);


    int j=0,i=word.size()-1;

    int len=i;
    while (i>=0 && j<=len && (word[i]==' ' || word[j]==' ' || tolower(word[i])==tolower(word[j])))
    {
        if (word[i]==' ' && word[j]!=' ') j--;
        else if (word[j]==' ' && word[i]!=' ') i++;
        i--;
        j++;
    }\
    if (j==len+1)
        cout<<endl<<"To jest palindrom";
    else
        cout<<endl<<"To nie jest palindrom";



    return 0;
}
