//https://olimpiada.ic.unicamp.br/pratique/p1/2016/f1/clube/
#include <bits/stdc++.h>
using namespace std;

//#define _ ios_base::sync_with_stdio(0); cin.tie(0);


int main()
{
    pair<char,int> item;
    vector<pair<char,int>> estoque;
    int contador = 0;

    //Cadastro
    int entrada = 0;
    cin >> entrada;
    for (int i = 0; i < entrada; i++)
    {
        int number = 0;
        char lado = 'A';
        cin >> number;
        cin >> lado;
        item = {number,lado};
        estoque.push_back(item);
    }



    for (int i = 0; i < estoque.size(); i++)
    {
        pair<char,int> selecionado_item = estoque[i];
        for (int j = 0; j < estoque.size(); j++)
        {
            pair<char,int> sapato = estoque[j];
            if (selecionado_item.first == sapato.first && selecionado_item.second != sapato.second)
            {
                contador++;
                estoque.erase(estoque.begin()+j);
                estoque.erase(estoque.begin()+i);
                break;
            }
        }

    }

    cout << contador << endl;

    return 0;
}
