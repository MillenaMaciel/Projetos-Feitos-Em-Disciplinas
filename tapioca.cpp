#include <bits/stdc++.h>
using namespace std;

// 0 1 2 3 4
// 1 4 5 3 2 |
// 1 4 5 3 | 2
// 1 4 5 | 3 2

int N;
int vec[1000];

void inverte(int r) {
  for (int i = 1, j = r; i < j; i++, j--) {
    swap(vec[i], vec[j]);
  }
}

void resolver(int n) {
  if (n < 1) return;
  int posicao = -1;
  for (int i = 1; i <= n; i++) {
    if (vec[i] == n) {
      posicao = i;
      break;
    }
  }
  if (posicao == n) {
    resolver(n-1);
  } else {
    // Primeiro passo: mandar para o começo
    if (posicao != 1) {
      int posicao_espatula = N-posicao+1;
      cout << posicao_espatula << ' ';
      inverte(posicao);
    }
    // Segundo passo: inverter tudo
    cout << N-n+1 << ' ';
    inverte(n);
    resolver(n-1);
  }
}

/*
| 4 | 1 | 2 | 3 | 5 |
4 1 2 3

2 1 5 3 4
5 1 2 3 4

5 1 2 3 4
5 1 2 3
5 1 2
5 1
5


*/

int main() {
  cin >> N;

  for (int i = 1; i <= N; ++i) {
    cin >> vec[i];
  }

  resolver(N);
  cout << "0\n";

  // for (int i = 1; i <= n; ++i) {
  //   cout << vec[i];
  //   if (i < n) {
  //     cout << ' ';
  //   }
  // }
  // cout << endl;
}
// 5 2 3 4 1
// 4 3 2 5 1