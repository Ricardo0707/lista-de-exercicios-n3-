//Construa um algoritmo que leia o nome e a nota de 20 alunos e ao final informe a média da
//turma e se existe algum aluno com nota igual a 0 (zero).
#include <iostream>
using namespace std;

int main() {
    string nome;
    float nota;
    float somaNotas = 0;
    bool temNotaZero = false;

    for (int i = 1; i <= 20; i++) {
        cout << "Aluno " << i << endl;

        cout << "Digite o nome: ";
        cin >> nome;

        cout << "Digite a nota: ";
        cin >> nota;

        somaNotas += nota; // acumula as notas para calcular a média

        if (nota == 0) {
            temNotaZero = true; // se nota for zero, marca como verdadeiro
        }

        cout << "------------------------" << endl;
    }

    float media = somaNotas / 20;

    cout << "\nMédia da turma: " << media << endl;

    if (temNotaZero) {
        cout << "Existe pelo menos um aluno com nota igual a 0." << endl;
    } else {
        cout << "Nenhum aluno tirou nota 0." << endl;
    }

    return 0;
}

