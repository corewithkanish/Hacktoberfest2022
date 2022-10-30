using namespace std;
#include<iostream>

void sieve(int n){



    if(n<=1){
        return ;

    }
    bool isprime[n+1];
    fill(isprime,isprime+n+1,true);
    for(int i =2;i*i<=n;i++){

        if(isprime[i]){
            for(int j = i*2;j<=n;j= j+i){
                isprime[j]= false;


            }
        }
    }
    for(int j = 2;j<=n;j++){

        if(isprime[j]){
            cout<<j<<" ";
        }
    }
}




int main(){
    sieve(23);

    return 0;
}
