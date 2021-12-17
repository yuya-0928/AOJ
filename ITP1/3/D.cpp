#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  int anc = 0;
  cin >> a >> b >> c;
  for(int i=a; i<=b; i++){
    // cin >> x >> y;
    if (c % i == 0){
      anc++;
    }
  }
  cout << anc << endl;
}