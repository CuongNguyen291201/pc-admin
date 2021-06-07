#include<bits/stdc++.h>
#define MAX 100
using namespace std;

class doThi{
    int n;
    int a[MAX][MAX];
    public:
    bool chuaxet[MAX];
    void readData();
    void init();
    void recursiveDFS(int u);
};

void doThi::readData(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
}

void doThi::init(){
    for(int i=1;i<=n;i++){
        chuaxet[i] = true;
    }
}

void doThi::recursiveDFS(int u){
    cout<<" "<<u;
    chuaxet[u] = false;
    for(int j=1;j<=n;j++){
        if(a[u][j]==1 && chuaxet[j] == true) recursiveDFS(j);
    }
}

int main(){
    doThi C;
    C.readData();
    C.init();
    C.recursiveDFS(1);
}
