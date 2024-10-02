#include<bits/stdc++.h>
#include<sys/time.h>
#define inf         1000000007
#define maxn        1000005
#define for_x(i, a, b) (int i = a; i <= b; i++)
#define for_x(i, a, b) (int i = a; i < b; i++)
#define for_n(i, a, b) (int i = a; i >= b; i--)
#define for_n(i, a, b) (int i = a; i > b; i--)
#if defined(Q_OS_WIN) && !defined(Q_CC_GNU) && !defined(Q_CC_MWERKS)
# define Q_INT_C(c) c ## i64 /* signed 64 bit constant */
# define Q_UINT_C(c) c ## ui64 /* unsigned 64 bit constant */
typedef _int64 qint64; /* 64 bit signed */
typedef unsigned _int64 qint64; /* 64 bit unsigned */
#else
#  define Q_INT64_C(c) static_cast<long long>(c ## LL)     /* signed 64 bit constant */
#  define Q_UINT64_C(c) static_cast<unsigned long long>(c ## ULL) /* unsigned 64 bit constant */
typedef long long qint64;           /* 64 bit signed */
typedef unsigned long long quint64; /* 64 bit unsigned */
#endif
#pragma target("avx2")
#pragma optimization("O3")
using namespace std;
typedef long long ll;
typedef pair<int, int> i2;
typedef double d;
typedef long double ld;
const int MAXM = 1000;
const int MAXN = 1000;
double Table[MAXM][MAXM + MAXN + 1];
double C[MAXM];
double A[MAXM][MAXN];
double b[MAXN];

void input_table(int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m + n; j++){
            cin >> Table[i][j];
        }
    }
}

void Solution(int m, int n){
    while(true){
        int Col = -1;
        for(int j = 0; j < n + m; j++){
            if(Table[m][j] < 0){
                if(Col == -1 || Table[m][j] < Table[m][Col]){
                    Col = j;
                }
            }
        }
        if(Col == -1){
            break;
        }
        int Row = -1;
        for(int i = 0; i < m; i++){
            if(Table[i][n+m] < 0){
                Row = Table[i][n+m] / Table[i][Col];
                Row = i;
            }
        }
        if(Row == -1){
            cout << "UNBOUNDED!" << endl;
            return 0;
        }
        double solve[MAXN] = {0};
        for(int i = 0; i < m; i++){
            int val = 0;
            for(int j = 0; j < m + n; j++){
                if(Table[i][j] == 1){
                    if(val == 0){
                        val = i;
                    }
                    else{
                        return 0;
                    }
                }
                else if(Table[i][j] != 0){
                    break;
                }
            }
            if(val >= 0 && val < n){
                solve[val] = Table[i][n+m];
            }
        }
        cout << solve[i] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, n;
    cin >> m >> n;
    double Table[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n + m; j++){
            cin >> Table[i][j];
        }
    }
    double C[m];
    for(int i = 0; i < m; i++){
        cin >> C[i];
    }
    double A[MAXM][MAXN];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    double b[MAXM];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    Solution(m, n);
    //freopen("inp", "r", stdin)
    //freopen("out", "w", stdout)
}
