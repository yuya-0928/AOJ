// #include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  while(true){
    cin >> h >> w;
    if (h == 0 && w == 0){
      break;
    }
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        if((i+1)%2==0){
          if((j+1)%2!=0){
            cout << ".";
          }else {
            cout << "#";
          }
        }else{
          if((j+1)%2==0){
            cout << ".";
          }else {
            cout << "#";
          }
        }
      }
      cout << endl;
    }
    cout << endl;
  }
}