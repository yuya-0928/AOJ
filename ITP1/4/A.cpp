#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int d = a / b;

  int r = a % b;
  double f = (double)a / (double)b;
  
  cout << fixed << setprecision(5) << endl;
  cout << d << " " << r << " " << f << endl;
}