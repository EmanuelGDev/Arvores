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

  int chave[50000];
  for(int i = 0; i < 50000; i++){
    chave[i] = rand();
  }

  int dado1[50000];
  for(int i = 0; i < 50000; i++){
    dado1[i] = i;
  }
  srand(time(nullptr)); 

  ofstream outfile ("teste.txt");

  for(int i = 0; i < 50000; i++){
  outfile << chave[i]<< " , "<<dado1[i]<< " , " << gerarString(1000) << endl;
  }
}

