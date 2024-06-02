#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define MAXN 1000000+6
const int mod = 100000000;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int a, b;
  cin >> a >> b;
  int ans = 0;
  int old = 0;
  while(a){
    cout << a << endl;
    ans += a;
    old += a;
    a = old/b;
    old -= a*b;
  }
  cout << ans << endl;
  return 0;
}