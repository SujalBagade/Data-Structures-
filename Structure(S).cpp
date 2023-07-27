#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
struct cards {
    int facevalue;
    int symbol ;
};
int main(){
    cards deck[52];
    int facevalue[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int symbol[]={0,1,2,3};
    int a=0;

    for (int i=0; i<4; i++){
        for(int j=0; j<13;j++){
            deck[a].facevalue=facevalue[j];
            deck[a].symbol=symbol[i];
            a++;
        }
    }
    for (int i = 0; i < 52; ++i) {
        cout << "Card " << i + 1 << ": " << deck[i].facevalue<<" " << deck[i].symbol <<endl;
    }
    return 0;
    
}
