//Construa um algoritmo que leia o nome, a idade e a altura de 20 pessoas e ao final
//apresente:
//a) A média de idade das pessoas com mais de 1,80 de altura
//b) O total de pessoas com mais de 35 anos
//c) O nome do mais alto
//d) O nome do mais novo
#include <iostream>
using namespace std;

int main() {
    string nome, nomeMaisAlto = "", nomeMaisNovo = "";
    int idade, totalMais35 = 0;
    int idadeMaisNovo = 0;
    float altura, maiorAltura = 0;
    int somaIdadesAltos = 0, contAltos = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Pessoa " << i << endl;

        cout << "Digite o nome: ";
        cin >> nome;

        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Digite a altura (em metros): ";
        cin >> altura;

        // A) Média das idades de quem tem mais de 1,80m
        if (altura > 1.80) {
            somaIdadesAltos += idade;
            contAltos++;
        }

        // B) Total de pessoas com mais de 35 anos
        if (idade > 35) {
            totalMais35++;
        }

        // C) Nome do mais alto
        if (altura > maiorAltura) {
            maiorAltura = altura;
            nomeMaisAlto = nome;
        }

        // D) Nome do mais novo
        if (i == 1 || idade < idadeMaisNovo) {
            idadeMaisNovo = idade;
            nomeMaisNovo = nome;
        }

        cout << "--------------------------" << endl;
    }

    // Média de idade dos que têm mais de 1,80m
    float mediaIdadeAltos = 0;
    if (contAltos > 0) {
        mediaIdadeAltos = (float)somaIdadesAltos / contAltos;
    }

    // Resultados
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "a) Média de idade das pessoas com mais de 1.80m: " << mediaIdadeAltos << endl;
    cout << "b) Total de pessoas com mais de 35 anos: " << totalMais35 << endl;
    cout << "c) Nome do mais alto: " << nomeMaisAlto << endl;
    cout << "d) Nome do mais novo: " << nomeMaisNovo << endl;

    return 0;
}

