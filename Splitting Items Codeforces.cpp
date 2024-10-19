//Splitting Items
#include<bits/stdc++.h>
using namespace std;
#if defined(Q_OS_WIN) && !defined(Q_CC_GNU) && !defined(Q_CC_MWERKS)
#  define Q_INT64_C(c) c ## i64    /* signed 64 bit constant */
#  define Q_UINT64_C(c) c ## ui64   /* unsigned 64 bit constant */
typedef __int64 qint64;            /* 64 bit signed */
typedef unsigned __int64 quint64;  /* 64 bit unsigned */
#else
#  define Q_INT64_C(c) static_cast<long long>(c ## LL)     /* signed 64 bit constant */
#  define Q_UINT64_C(c) static_cast<unsigned long long>(c ## ULL) /* unsigned 64 bit constant */
typedef long long qint64;           /* 64 bit signed */
typedef unsigned long long quint64; /* 64 bit unsigned */
#endif

typedef qint64 qlonglong;
typedef quint64 qulonglong;
const int MAX_SIZE = 100;
int cache[MAX_SIZE]; 

int n;
int arr[n];

void Min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

void Sort(int n){
    int arr[n];
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void Reverse(int n){
    int arr[n];
    for(int i = 0; i < n/2; i++){
        cin >> arr[i];
        swap(arr[i], arr[i]/2 -1);
        cout << arr[i] << "\n";
    }
}

void Solution(int n){
    int t;
    cin >> t; 
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                swap(arr[i], arr[j]);
            }
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        long long res = arr[n-1] - sum;
        if(res <= k){
            res = (arr[n-1] + sum - k)%2;
        }
        else{
            for(int i = n; i > 0; i--){
                long long fuck = sum - (arr[n-1] - arr[i-1]);
                if(fuck <= k){
                    res = Min(fuck, arr[n-1] - arr[i-1]);
                }
            }
        }
        cout << res << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int res = Solution(n);
    cout << res << "\n";
    return 0;
}