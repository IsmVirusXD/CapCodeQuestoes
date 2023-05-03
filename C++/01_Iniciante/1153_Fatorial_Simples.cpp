//https://www.beecrowd.com.br/judge/pt/problems/view/1153
#include <bits/stdc++.h>
using namespace std;

int Fatorial(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int a = n-1;
        return n * Fatorial(a);
    }
}

int main(){
    int c; cin >> c;
    int respota = Fatorial(c);
    cout << respota << endl;
    return 0;
}


