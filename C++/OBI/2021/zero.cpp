// https://olimpiada.ic.unicamp.br/pratique/p1/2021/f1/zero/

#include <iostream>
#include <list>
#include <numeric>
using namespace std;


int main()
{
    list<int> lista;
    int n = 0;
    int into = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> into;
        if (into == 0)
        {
            lista.pop_back();
        }
        else
        {
            lista.push_back(into);
        }
    }

    double soma = accumulate(begin(lista), end(lista),0);
    cout << soma;

    return 0;
}
