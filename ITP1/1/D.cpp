#include <bits/stdc++.h>
using namespace std;

int main(){
  int Sec;
  int h, m, s;
  cin >> Sec;
  s = Sec % 60;
  m = Sec % 3600 /60;
  h = Sec / 3600;
  // cout << s << endl;
  // cout << m << endl;
  // cout << h << endl;
  cout << h << ":" << m << ":" << s << endl; 
}