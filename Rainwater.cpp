# include<bits/stdc++.h>
//#include "miniproj.cpp"
using namespace std;
//Harvesting Rainwater
int main(){
    int p;
    cout<<"Kindly enter the size of array : ";
    cin>>p;
    int st[p];
    cout<<"Please enter the value of rises in an orderly manner";
    for(int i = 0; i < p; i++){
        cin>>st[i];
    }
    int frt,bk,rnr,ans = 0;
    frt = 0;
    bk = p-1;
    rnr = 0;
    while(st[frt] == 0 && frt != bk){
        frt++;
    }
    while(st[bk] == 0 && bk != frt){
        bk--;
    }
    if(frt == bk){
        ans = 0;
        cout<<ans;
        return 0;
    }
    rnr = frt;
    int maxi = 0;
    int c;   
    for(int i = 0; i < p; i++){
        if(maxi < st[rnr]){
            maxi = st[i];
            c = i;
        }
    }
    rnr = c;
    int rnr2;
    while(rnr != bk){
        rnr++;
        rnr2 = rnr-1;
        while((rnr2 != c)&&(st[rnr2] < st[rnr])){
            ans += st[rnr] - st[rnr2];
            st[rnr2] = st[rnr];
            rnr2--;
        }
    }
    rnr = c;
    while(rnr != frt){
        rnr--;
        rnr2 = rnr+1;
        while((rnr2 != c)&&(st[rnr2] < st[rnr])){
            ans += st[rnr] - st[rnr2];
            st[rnr2] = st[rnr];
            rnr2++;
        }
    }
    cout<<ans;         
    return 0;
}

