#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> a(3);
  // int a, b, c;
  for (int i=0; i<3; i++){
    cin >> a.at(i);
    // a.at(i) *= -1;
  }
  // cin >> a >> b >> c;

  sort(a.begin(), a.end());

  for (int i=0; i<3; i++){
    // a.at(i) *= -1;
    cout << a.at(i);
    if (i!=2){
      cout << " ";
    }else{
      cout << endl;
    }
  }

  
}