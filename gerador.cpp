#include <iostream>
#include <fstream>
#include <cstdlib>
#include <random>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string gerarString(int comprimento) {
    string s;
    for (int i = 0; i < comprimento; ++i) {
        char c = rand() % 26 + 'a'; // Gera um caractere minúsculo aleatório
        s.push_back(c);
    }
    return s;
}

int main(){

  int x = 0;
  cout << "Digite a quantidade de registros que voce quer: ";
  cin >> x;

  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(0, 1000000);

  int chave[x];
  for(int i = 0; i < x; i++){
    chave[i] = dis(gen);
  }

  int dado1[x];
  for(int i = 0; i < x; i++){
    dado1[i] = i;
  }

  ofstream outfile ("teste.txt");

  for(int i = 0; i < x; i++){
  outfile << chave[i]<< " , "<<dado1[i]<< " , " << gerarString(1000) << endl;
  }
}

