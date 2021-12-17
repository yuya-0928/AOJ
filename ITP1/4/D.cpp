#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, min, max;
  long long sum = 0;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a.at(i);
    sum += a.at(i);
  }
  sort(a.begin(), a.end());
  min = a.at(0);
  max = a.at(n - 1);
  cout << min << " " << max << " " << sum << endl;
}