#include<iostream>
#include<algorithm>
#include<array>

using namespace std;

//Functions
void eRetangulo(float A, float B, float C);
void equilatero_isoceles(float A, float B, float C);
void roaAngulo(float A, float B, float C);


int main()
{
    //Variaveis
    array<float, 3> entrada;

    //Entrada do Usuario
    cin >> entrada[0] >> entrada[1] >> entrada[2];

    //Ordenando
    sort(entrada.begin(),entrada.end());
    reverse(entrada.begin(),entrada.end());

    eRetangulo(entrada[0],entrada[1],entrada[2]);


    return 0;
}

void eRetangulo(float A, float B, float C)
{
    if (A>= (B + C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        roaAngulo(A,B,C);
        equilatero_isoceles(A,B,C);
        return;
    }
}


void equilatero_isoceles(float A, float B, float C)
{
    if ((A == B) && (B == C)){
        cout << "TRIANGULO EQUILATERO" << endl;
        return;
    }

    if (A == B)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
        return;
    }
    else if (B == C)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
        return;
    }
    else if (B == C)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
        return;
    }
    return;
}

void roaAngulo(float A, float B, float C)
{
    float resultado = 0;
    A = A * A;
    B = B * B;
    C = C * C;
    resultado =  B + C;

    if (A == resultado)
    {
        cout << "TRIANGULO RETANGULO" << endl;
        return;
    }
    else if (A < resultado)
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
        return;
    }
    else if (A > resultado)
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
        return;
    }
}
