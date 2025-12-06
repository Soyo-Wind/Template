#region Template
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
#include <map>
#include <functional>
#define rep(i,n) for(int i=0;i<(n);i++)
#define vset(n,x) rep(i,n)cin>>x[i]
#define vsort(x) sort(x.begin(),x.end())
#define vsortrev(x) sort(x.begin(), x.end(), greater<tuple<teg,teg>>())
#define vfirstsort(x) sort(x.begin(), x.end(), [](const tuple<teg,teg>& t1, const tuple<teg,teg>& t2) { return get<0>(t1) < get<0>(t2); });
#define gettup(index,t) get<index>(t)
#define vvi vector<vi>
#define vtii vector<tuple<teg,teg>>
#define vi vector<teg>
#define teg int
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
inline void print(vector<teg> a) { for (auto e : a) { cout << e << " "; } cout << endl; }
inline void print(vector<vector<teg>> a) { for (auto e1 : a) { for (auto e2 : e1) { cout << e2 << " "; } cout << endl; } }
inline void print(vector<tuple<teg, teg>> a) { for (auto e : a) { cout << get<0>(e) << " " << get<1>(e) << endl; } }
vvi inline allbit(int n) {vvi res;for(int bit=0;bit<1<<n;++bit){vector<int> S;for(int i=0;i<n;++i){if(bit&(1<<i)){S.push_back(i);}}res.push_back(S);}return res;}
vtii inline vivitovtii(vi a,vi b){vtii res;rep(i,a.size()){res.push_back(make_tuple(a[i],b[i]));}return res;}
const long long INF = 1LL<<60;
#pragma endregion
int main(){
  
}
