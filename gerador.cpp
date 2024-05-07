//Bibliotecas utilizadas
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <random>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Função que gera Strings aleatorias de comprimentos definidos pelo usuário
string gerarString(int comprimento) {
    string s;
    for (int i = 0; i < comprimento; ++i) {
        char c = rand() % 26 + 'a'; // Gera um caractere minúsculo aleatório
        s.push_back(c);
    }
    return s;
}

int main(){

  //Recebe a quantidade de registros que o usuário quer
  int x = 0;
  cout << "Digite a quantidade de registros que voce quer: ";
  cin >> x;

  //Forma de gerar números aleatórios
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(0, 1000000);

  //Preenche o array de chaves com números aleatórios para cada posição do array
  int chave[x];
  for(int i = 0; i < x; i++){
    chave[i] = dis(gen);
  }

  //Gera números sequenciais para o dado1
  int dado1[x];
  for(int i = 0; i < x; i++){
    dado1[i] = i;
  }

  //Cria um arquivo .txt
  ofstream outfile ("teste.txt");

  //Preenche o arquivo .txt com uma chave aleatória, o numero de ordem do registro e uma string aleatória respectivamente
  for(int i = 0; i < x; i++){
  outfile << chave[i]<< " , "<<dado1[i]<< " , " << gerarString(1000) << endl;
  }
}

