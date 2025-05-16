#include<iostream>
using namespace std;
void printfunc(int i, int N){
    if(N==i-1){
        return;
    }

    printfunc(i,N-1);
    cout<<N<<endl;
    
}

void f(int i, int j){
    if(i<=j){
        cout<<i<<j;
        f(i+1,j-1);
    }
    
    return;
}

int f4(int a, int b){
    int half=f4(a,b/2);
    if (b%2==0)
    {
        return half * half;
    }
    else{
        return half * half * a;
    }
}

int main(){

    printfunc(5,10);
    f(1,5);
    cout<<189/10;
return 0;
}