//Bibliotecas usadas
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//Função que  gera um char de 1000 caracteres
string gerar_char() {
    string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result;
    for(int i = 0; i < 1000; ++i) {
        result.push_back(caracteres[rand() % caracteres.size()]);
    }
    return result;
}
//Gerador de numero aleatório de 1 a 100
int gerar_numero() {
    return rand() % 100 + 1;
}

int main() {
    //Entrada do arquivo
    int tamanho;
    cout << "Qual tamanho de arquivo você deseja criar? (Ja vai ser criado ordenado e nao ordenado): ";
    cin >> tamanho;

    vector<int> chaves(tamanho);
    for(int i = 0; i < tamanho; ++i) {
        chaves[i] = i + 1;
    }
    //Criação do arquivo txt com registros ordenados
    ofstream arquivo_ordenado("./Arquivos de Entrada/"+ to_string(tamanho)+ +"_registros_ordenados.txt");
    for(int chave : chaves) {
        int dado1 = gerar_numero();
        string dado2 = gerar_char();

        arquivo_ordenado << chave << " " << dado1 << " " << dado2 << "\n";
    }
    arquivo_ordenado.close();

    //Embaralhamento das chaves
    random_shuffle(chaves.begin(), chaves.end());

    //Criação do arquivo txt com registros desordenados
    ofstream arquivo_desordenado("./Arquivos de Entrada/"+ to_string(tamanho)+ +"_registros_desordenados.txt");
    for(int chave : chaves) {
        int dado1 = gerar_numero();
        string dado2 = gerar_char();

        arquivo_desordenado << chave << " " << dado1 << " " << dado2 << "\n";
    }
    arquivo_desordenado.close();

    return 0;
}
