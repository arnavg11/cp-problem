#include "testlib.h"
#include <bits/stdc++.h>
#define For(i,n) for(int i=0; i<n;i++)
#define FOR(k,i,n) for(int i=k; i<n;i++)
#define min(a,b) (a>b?b:a)
#define max(a,b) (a>b?a:b)
#define cap max(1,(int)((M+1)/.9/f))
using namespace std;
int wnext(int a, int b, int weight){
    for (int i = 0; i < abs(weight); i++)if(weight>0)a = rnd.next(a, b);
    else b =  rnd.next(a, b);
    return rnd.next(a, b);
}
void writeTest(int test) {
    int n = wnext(2, 1000,-1);
    int m = wnext(2, 1000,-1);
    int f = wnext(2,min(min(n,m),4000000/n/m),0);
    int M = wnext(4, (int)1e9,1);
    cout<<n<<" "<<m<<" "<<f<<" "<<M<<"\n";
    For(i,n){
        For(i,m-1)cout<<wnext(1, cap,-2)<<" ";
        cout<<wnext(1, cap,-2)<<"\n";
    }
}

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    for (int i = 1; i <= 1; i++)
        writeTest(i);
}
