//https://olimpiada.ic.unicamp.br/pratique/p2/2014/f1/lingua/
#include <bits/stdc++.h>
using namespace std;

int main () {
    string e; getline(cin,e);
    vector<char> v(e.begin(), e.end());
    string w;

    for(int i = 0; i < v.size(); i++)
    {

        if( v[i] == v[i+1] && v[i] == v[i-1])
        {
            w += 'p';
            continue;
        }
        if (v[i] == 'p')
        {
            continue;
        }
        else
        {
            w += v[i];
        }

    }

    cout << w << endl;


    return 0;
}
