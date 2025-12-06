#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
#include <map>
#include <functional>
#include <limits>
#define rep(i,n) for(teg i=0;i<(teg)(n);i++)
#define each(i,v) for(auto &i:v)
#define vset(n,x) rep(i,n)cin>>x[i]
#define vsort(x) sort(x.begin(),x.end())
#define vsortrev(x) sort(x.begin(), x.end(), greater<tuple<teg,teg>>())
#define vfirstsort(x) sort(x.begin(), x.end(), [](const tuple<teg,teg>& t1, const tuple<teg,teg>& t2) { return get<0>(t1) < get<0>(t2); });
#define vmax(x) *max_element(x.begin(),x.end())
#define vmin(x) *min_element(x.begin(),x.end())
#define append push_back
#define pop pop_back
#define len size()
#define endress while(true)
#define gettup(index,t) get<index>(t)
#define vvi vector<vi>
#define vtii vector<tuple<teg,teg>>
#define vi vector<teg>
#define teg long long
#define INF(type) numeric_limits<type>::max()
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
void print(vector<teg> a) { for (auto e : a) { cout << e << " "; } cout << endl; }
void print(vector<vector<teg>> a) { for (auto e1 : a) { for (auto e2 : e1) { cout << e2 << " "; } cout << endl; } }
void print(vector<tuple<teg, teg>> a) { for (auto e : a) { cout << get<0>(e) << " " << get<1>(e) << endl; } }
vvi allbit(teg n) {vvi res;for(teg bit=0;bit<1<<n;++bit){vector<teg> S;for(teg i=0;i<n;++i){if(bit&(1<<i)){S.append(i);}}res.append(S);}return res;}
vtii vivitovtii(vi a,vi b){vtii res;rep(i,a.size()){res.append(make_tuple(a[i],b[i]));}return res;}

int main(){
    
}
