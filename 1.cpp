
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <iomanip>
#include <numeric>
#include <functional>
#include <chrono>
using namespace std;
using namespace std::chrono;
// Macros for commonly used types
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<vi> vvi;

// Macros for commonly used constants
const int INF = 1e9;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

// Fast input/output
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Shortcut for loops
#define forloop(i, a, b) for (int i = (a); i < (b); ++i)
#define forback(i, a, b) for (int i = (a); i >= (b); --i)
#define iterate(it, a) for (auto it = (a).begin(); it != (a).end(); ++it)

// Shortcut for commonly used functions
#define sqr(x) ((x) * (x))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * (b) / gcd(a, b))

int main() {
    fastio();
    ll A,B;
    
    int t;
    cin>>t;
    while(t--){
        
        cin>>A>>B;
        ll years=0;
        while(A*years<B){
            years++;
        }
        cout<<years-1;
    }
    
    return 0;
}









