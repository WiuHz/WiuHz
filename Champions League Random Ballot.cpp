//Cpp Champions League - Group Stage
#include<bits/stdc++.h>
#define inf     1000000007
#define maxn        1000005
#define for_x(i,a,b) for(int i = a; i <= b; i++)
#define for_n(i,a,b) for(int i = a; i >= b; i--)
#define fi          first
#define se          second
#define p_b         push_back
#define mod         1000000007

using namespace std;
typedef long long LL;
typedef pair<int,int> i2;
typedef pair<i2,i2> i4;
#int MAXN[100];

string team;
struct Random{
    string country;
    int potnumber;
    string place;

    Node Ballot(){
        this.country = country;
        this.potnumber = potnumber;
        this.place = place;
    }
};

string pot1[];
string pot2[];
string pot3[];
string pot4[];

bool PotSize(){
    if(pot1.size() != pot2.size() && pot2.size() != pot3.size() && pot3.size() != pot4.size() && pot4.size() != 9){
        return false;
    }
    else{
        return true;
    }
}

bool Country_Check(){
    string k;
    cin >> team;
    for(int i = 0; i < 9; i++){
        k = pot1[i];
        if(k.country = team.country){
            return false;
        }
        else{
            return true;
        }
    }
    for(int i = 0; i < 9; i++){
        k = pot2[i];
        if(k.country = team.country){
            return false;
        }
        else{
            return true;
        }
    }
    for(int i = 0; i < 9; i++){
        k = pot3[i];
        if(k.country = team.country){
            return false;
        }
        else{
            return true;
        }
    }
    for(int i = 0; i < 9; i++){
        k = pot4[i];
        if(k.country = team.country){
            return false;
        }
        else{
            return true;
        }
    }
}

void Home(){
    cout << "H";
}

void Away(){
    cout << "A";
}

class Place{
    private string k1;
    private string k2;
    private string k3;
    private string k4;
    private string k5;
    private string k6;
    private string k7;
    private string k8;
    public string pot1[];
    for(int i = 0; i < pot1.size(); i++){
        cin >> pot1[i];
    }
    public string pot2[];
    for(int i = 0; i < pot2.size(); i++){
        cin >> pot2[i];
    }
    public string pot3[];
    for(int i = 0; i < pot3.size(); i++){
        cin >> pot3[i];
    }
    public string pot4[];
    for(int i = 0; i < pot4.size(); i++){
        cin >> pot4[i];
    }
    public int potnumber;
    public string place;
    
    void Choose_Place(){
        k1 = "";
        for(int i = 0; i < pot1.size(); i++){
            k1 = pot1[i];
            k1.Home();
            cout << k1 << " ";
            if(k1.Home()){
                k2 = "";
                for(int j = 0; j < pot1.size(); j++){
                    k2 = pot1[j];
                    k2.Away();
                    cout << k2 << " ";
                }
            }
        }
        k3 = "";
        for(int i = 0; i < pot2.size(); i++){
            k3 = pot2[i];
            k3.Home();
            cout << k3 << " ";
            if(k3.Home()){
                k4 = "";
                for(int j = 0; j < pot2.size(); j++){
                    k4 = pot2[j];
                    k4.Away();
                    cout << k4 << " ";
                }
            }
        }
        k5 = "";
        for(int i = 0; i < pot3.size(); i++){
            k5 = pot3[i];
            k5.Home();
            cout << k5 << " ";
            if(k5.Home()){
                k6 = "";
                for(int j = 0; j < pot3.size(); j++){
                    k6 = pot3[j];
                    k6.Away();
                    cout << k6 << " ";
                }
            }
        }
        k7 = "";
        for(int i = 0; i < pot4.size(); i++){
            k7 = pot4[i];
            k7.Home();
            cout << k7 << " ";
            if(k7.Home()){
                k8 = "";
                for(int j = 0; j < pot4.size(); j++){
                    k8 = pot4[j];
                    k8.Away();
                    cout << k8 << " ";
                }
            }
        }
        return;
    }
}

void Solution(){
    string k1;
    string k2;
    string team_opponents[];
    cin >> team;
    while(team.Country_Check()){
        for(int i = 0; i < pot1.size(); i++){
            k = pot1[i];
            if(team != k1){
                pot1.remove(k1);
                team_opponents.add(k1);
                cout << k1.place << k1 << k1.country << k1.potnumber << " ";
                for(int j = 0; j < n; j++){
                    if(i == j){
                        k2 = pot1[j];
                        if(team != k2){
                            pot1.remove(k2);
                            team_opponents.add(k2);
                            cout << k2.place << k2 << k2.country << k2.potnumber << " ";
                        }
                    }
                }
            }
        }
        for(int i = 0; i < pot2.size(); i++){
            k1 = pot2[i];
            if(team != k1){
                pot2.remove(k1);
                team_opponents.add(k1);
                cout << k1.place << k1 << k1.country << k1.potnumber << " ";
                for(int j = 0; j < n; j++){
                    if(i == j){
                        k2 = pot2[j];
                        if(team != k2){
                            pot2.remove(k2);
                            team_opponents.add(k2);
                            cout << k2.place << k2 << k2.country << k2.potnumber << " ";
                        }
                    }
                }
            }
        }
        for(int i = 0; i < pot3.size(); i++){
            k1 = pot3[i];
            if(team != k1){
                pot3.remove(k1);
                team_opponents.add(k1);
                cout << k1.place << k1 << k1.country << k1.potnumber << " ";
                for(int j = 0; j < n; j++){
                    if(i == j){
                        k2 = pot3[j];
                        if(team != k2){
                            pot3.remove(k2);
                            team_opponents.add(k2);
                            cout << k2.place << k2 << k2.country << k2.potnumber << " ";
                        }
                    }
                }
            }
        }
        for(int i = 0; i < pot4.size(); i++){
            k = pot4[i];
            if(team != k1){
                pot4.remove(k1);
                team_opponents.add(k1);
                cout << k1.place << k1 << k1.country << k1.potnumber << " ";
                for(int j = 0; j < n; j++){
                    if(i == j){
                        k2 = pot4[j];
                        if(team != k2){
                            pot4.remove(k2);
                            team_opponents.add(k2);
                            cout << k2.place << k2 << k2.country << k2.potnumber << " ";
                        }
                    }
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("main.inp", "r", stdin);
    //freopen("main.out", "w", stdout);
    Solution();
}