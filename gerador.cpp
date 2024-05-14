#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string gerar_char() {
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result;
    for(int i = 0; i < 1000; ++i) {
        result.push_back(caracteres[rand() % caracteres.size()]);
    }
    return result;
}

int gerar_numero() {
    return rand() % 100 + 1;
}

int main() {
    int tamanho;
    cout << "Qual tamanho de arquivo você deseja criar? (Já vai ser criado ordenado e não ordenado): ";
    cin >> tamanho;

    vector<int> chaves(tamanho);
    for(int i = 0; i < tamanho; ++i) {
        chaves[i] = i + 1;
    }

    ofstream arquivo_ordenado("./Arquivos de Entrada/"+ to_string(tamanho)+ +"_registros_ordenados.txt");
    for(int chave : chaves) {
        int dado1 = gerar_numero();
        string dado2 = gerar_char();

        arquivo_ordenado << chave << " " << dado1 << " " << dado2 << "\n";
    }
    arquivo_ordenado.close();

    random_shuffle(chaves.begin(), chaves.end());

    ofstream arquivo_desordenado("./Arquivos de Entrada/"+ to_string(tamanho)+ +"_registros_desordenados.txt");
    for(int chave : chaves) {
        int dado1 = gerar_numero();
        string dado2 = gerar_char();

        arquivo_desordenado << chave << " " << dado1 << " " << dado2 << "\n";
    }
    arquivo_desordenado.close();

    return 0;
}
