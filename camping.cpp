#include <iostream>
using namespace std;

int main(){
    int L,P,V;
    int cnt=0;
    while(1){
        cnt++;
        cin >> L >> P >> V;
        
        if(L==0 && P==0 && V==0) break;

        if(V%P<L)
            cout << "Case " << cnt << ": " << (V/P*L)+(V%P) << "\n";
        else
            cout << "Case " << cnt << ": " << V/P*L+L << "\n";
    }   
}