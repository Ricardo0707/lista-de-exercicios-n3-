//Faça um algoritmo que leia o nome e o sexo de 10 pessoas e ao final apresente o total de
//homens e o total de mulheres.
#include <iostream>
using namespace std;
main ( )
{
string nome;
    char sexo;
    int ttl_homens = 0, ttl_mulheres = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Qual o seu nome?: ";
        cin >> nome;

        cout << "Qual eh seu sexo? (M ou F): ";
        cin >> sexo;

        if (sexo == 'M' || sexo == 'm') {
            ttl_homens++;
        } else if (sexo == 'F' || sexo == 'f') {
            ttl_mulheres++;
        } else {
            cout << "Sexo inválido! Não será contado." << endl;
        }

        cout << "-----------------------------" << endl;
    }

    cout << "\nTotal de homens: " << ttl_homens << endl;
    cout << "Total de mulheres: " << ttl_mulheres << endl;

    return 0;
}
