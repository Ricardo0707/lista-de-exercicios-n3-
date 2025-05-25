//Faça um algoritmo que simule um sistema de eleição para 20 eleitores. Nesse sistema
//existem 3 candidatos que são votados através de seus códigos. São eles:
//1 = Candidato 1;
//2 = Candidato 2;
//3 = Candidato 3;
//5 = Voto nulo;
//6 = Voto em branco;
//Elabore um algoritmo que calcule e escreva o total de votos e o percentual de votos para cada
//candidato, para os votos brancos e para os nulos. Ao final, Algoritmo também deverá escrever
//na tela o nome do vencedor da eleição.
#include <iostream>
using namespace std;

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0;
    int nulo = 0, branco = 0;
    int totalVotos = 20;

    cout << "SISTEMA DE VOTACAO - ELEICAO SIMULADA" << endl;
    cout << "Códigos dos candidatos:" << endl;
    cout << "1 = Candidato 1" << endl;
    cout << "2 = Candidato 2" << endl;
    cout << "3 = Candidato 3" << endl;
    cout << "5 = Voto Nulo" << endl;
    cout << "6 = Voto em Branco" << endl;

    for (int i = 1; i <= 20; i++) {
        cout << "\nEleitor " << i << ", digite seu voto: ";
        cin >> voto;

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                cout << "Voto inválido! Não será contado." << endl;
                i--; // repete a votação para o mesmo eleitor
                break;
        }
    }

    // Cálculo de percentuais
    float perc1 = (candidato1 * 100.0) / totalVotos;
    float perc2 = (candidato2 * 100.0) / totalVotos;
    float perc3 = (candidato3 * 100.0) / totalVotos;
    float percNulo = (nulo * 100.0) / totalVotos;
    float percBranco = (branco * 100.0) / totalVotos;

    // Resultado da votação
    cout << "\nRESULTADO FINAL DA ELEICAO:" << endl;
    cout << "Candidato 1: " << candidato1 << " votos (" << perc1 << "%)" << endl;
    cout << "Candidato 2: " << candidato2 << " votos (" << perc2 << "%)" << endl;
    cout << "Candidato 3: " << candidato3 << " votos (" << perc3 << "%)" << endl;
    cout << "Votos Nulos: " << nulo << " votos (" << percNulo << "%)" << endl;
    cout << "Votos em Branco: " << branco << " votos (" << percBranco << "%)" << endl;

    // Verifica o vencedor
    if (candidato1 > candidato2 && candidato1 > candidato3) {
        cout << "VENCEDOR: Candidato 1" << endl;
    } else if (candidato2 > candidato1 && candidato2 > candidato3) {
        cout << "VENCEDOR: Candidato 2" << endl;
    } else if (candidato3 > candidato1 && candidato3 > candidato2) {
        cout << "VENCEDOR: Candidato 3" << endl;
    } else {
        cout << "EMPATE! A eleição terminou sem um vencedor claro." << endl;
    }

    return 0;
}

