//Showering Cpp
#include<bits/stdc++.h>
using namespace std;
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

int t;
int a[];
int b[];

bool value(int a[], int b[]){
    for(int i = 0; i < a.size(); i++){
        if(a[i] <= 0 && a.size() <= 0){
            return false;
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] <= 0 && b.size() <= 0){
            return false;
        }
    }
}

void Solution(int a[], int b[]){
    int k = 0;
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); i++){
            h = a[i] + a[j];
        }
    }
    int h = 0;
    for(int l = 0; l < b.size(); l++){
        h = b[l];  
    }
    return h + k;
}

int main(){
    int t = 4;
    int n = 3;
    int a[];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[];
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int res = Solution(a[], b[]);
    if(res <= 10){
        cout << "YES" << "/n";
    }
    else{
        cout << "NO" << "/n";
    }
    return 0;
}