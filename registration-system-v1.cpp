// Salvar em txt
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
main() {
    cout << "Bem-vindo ao programa de salvar em .txt" << endl;

    // Uma variavel CAD é criada e atribuida como um arquivo aberto
    FILE *CAD;

    // Acessa o arquivo .txt, com o 'w' ele cria caso não exista
    CAD = fopen("arquivo.txt", "w");

    // Checa caso de algum erro ao abrir o arquivo
    if (CAD == NULL) {
        cout << "Erro ao abrir o arquivo" << endl;
        return 0;
    }
    cout << "Digite alguns numeros inteiros abaixo (3 vezes): " << endl;
    int texto;
    cout << "Digite o primeiro numero: ";
    cin >> texto;

    // Salva variavel texto como um printf no arquivo .txt
    fprintf(CAD, "primeiro numero: %d\n", texto);
    cout << "Digite o segundo numero: ";
    cin >> texto;
    fprintf(CAD, "segundo numero: %d\n", texto);
    cout << "Digite o terceiro numero: ";
    cin >> texto;
    fprintf(CAD, "terceiro numero: %d\n", texto);
    cout << "Os numeros foram salvos no arquivo 'arquivo.txt'" << endl;

    // Pula uma linha no arquivo .txt
    cout << "Digite alguns numeros quebrados abaixo (3 vezes): " << endl;
    double texto2;
    cout << "Digite o primeiro numero: ";
    cin >> texto2;

    // Salva variavel texto2 como um printf no arquivo .txt
    fprintf(CAD, "primeiro numero quebrado: %.2f\n", texto2);
    cout << "Digite o segundo numero: ";
    cin >> texto2;
    fprintf(CAD, "segundo numero quebrado: %.2f\n", texto2);
    cout << "Digite o terceiro numero: ";
    cin >> texto2;
    fprintf(CAD, "terceiro numero quebrado: %.2f\n", texto2);
    cout << "Os numeros quebrados foram salvos no arquivo 'arquivo.txt'" << endl;

    // Fecha o arquivo .txt"
    system("pause");
}