// https://olimpiada.ic.unicamp.br/pratique/p2/2014/f2/notas/

#include <iostream>
#include <list>

using namespace std;

int main() {
    int input = 0;
    list<int> maior;
    list<int> unicos;
    int contador = 0;
    int resposta = 0;

    cin >> input;
    for (int i = 0; i < input; i++ )
    {
        int n = 0;
        cin >> n;
        maior.push_back(n);
    }

    maior.sort();
    unicos = maior;
    unicos.unique();

    int tamanho = unicos.size();
    for(int i = 0; i < tamanho; i++)
    {
        int numero = unicos.front();
        int novo_contador = 0;;
        while(numero == maior.front())
        {
            novo_contador++;
            maior.pop_front();
        }

        if (novo_contador > contador)
        {
            resposta = numero;
            contador = novo_contador;
        }
        else if (novo_contador == contador && numero > resposta)
        {
            resposta = numero;
            contador = novo_contador;
        }
        unicos.pop_front();
    }

    cout << resposta;

    return 0;
}
