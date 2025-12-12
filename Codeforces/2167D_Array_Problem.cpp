#include <bits/stdc++.h>
#include <fstream>

using namespace std;
using vi = vector<int>;
using ll = long long;

//Problem Description:
// You are given an integer n and an array a of length n

// .

// Find the smallest integer x
// (2 <= x <= 1018) such that there exists an index i (1=i=n) with gcd*(ai,x)=1. If no such x exists within the range [2,1018], output -1.

//Potential Solutions:
// for a_i to be to fulfill gcd(a_i, x)=1 a_i has to be odd or prime


void solve() {

  ll n, s;
  bool in_range = false;
  ll arr[n];

  for(size_t i=0; i<n; i++) {
    cin >> arr[i];
  }



  if(in_range)
    cout << s;
  else
    cout << -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);


  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}









