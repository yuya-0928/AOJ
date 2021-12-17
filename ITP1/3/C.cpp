#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  int i = 0;
  while(true){
    cin >> x >> y;
    i+= 1;
    if (x == 0 && y == 0){
      break;
    }
    if (x < y){
      cout << x << " " << y << endl;
    }else {
      cout << y << " " << x << endl;
    }
  }  
}