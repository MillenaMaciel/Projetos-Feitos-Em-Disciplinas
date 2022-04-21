#ifndef DISJUNTOS_HPP
#define DISJUNTOS_HPP
#include <bits/stdc++.h>

using namespace std;

class Disjuntos {
private:
public:
  int encontra_pai(int x) {
    if (x == pai[x]) {
      return x;
    }
    return encontra_pai(pai[x]);
  }

  vector<int> pai, tamanho;
  Disjuntos(int n) { // 0 .. n
    pai = vector<int>(n+1);
    tamanho = vector<int>(n+1);
    for (int i = 1; i <= n; i++) {
      pai[i] = i;
      tamanho[i] = 1;
    }
  }

  void une(int x, int y) {
    int repre_x = encontra_pai(x); // 0
    int repre_y = encontra_pai(y); // 2
    if (repre_x == repre_y) return;
    if (tamanho[repre_x] >= tamanho[repre_y]) {
      pai[repre_y] = repre_x;
      tamanho[repre_x] += tamanho[repre_y];
    } else {
      pai[repre_x] = repre_y;
      tamanho[repre_y] += tamanho[repre_x];
    }
  }

  int mesmo(int x, int y) {
    int repre_x = encontra_pai(x);
    int repre_y = encontra_pai(y);
    return (repre_x == repre_y ? 1 : 0);
  }
};

#endif