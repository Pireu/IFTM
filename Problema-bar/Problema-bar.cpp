#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string sexo;
    int cerveja, refri, espeto;
    double consumo, couvert, ingresso, total;

    //PARTE 1: LEITURA DOS DADOS

    cout << "Sexo: ";
    cin >> sexo;
    cout << "Quantidade de cervejas: ";
    cin >> cerveja;
    cout << "Quantidade de refrigerantes: ";
    cin >> refri;
    cout << "Quantidade de espetinhos: ";
    cin >> espeto;

    //PARTE 2: CALCULOS

    if (sexo == "F")
    {
        ingresso = 8.0;
    }
    else
    {
        ingresso = 10.0;
    }
    consumo = cerveja * 5.0 + refri * 3.0 + espeto * 7.0;
    if (consumo > 30.0) {
        couvert = 0.0;
    }
    else {
        couvert = 4.0;
    }

    total = ingresso + consumo + couvert;

    //PARTE 3: MOSTRAR RELATORIO

    cout << fixed << setprecision(2);
    cout << endl << "RELATORIO:\n";
    cout << "Consumo = R$ " << consumo << endl;
    if (couvert == 0.0)
    {
        cout << "Insento de Couvert" << endl;
    }
    else
    {
        cout << "Couvert = R$ " << couvert << endl;
    }
    cout << "Ingresso = R$ " << ingresso << endl;
    cout << endl << "Valor a pagar = R$ " << total << endl;

    return 0;
}

