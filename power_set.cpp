using namespace std;
#include<iostream>
#include<limits.h>



// int isprime(int n){


//     if(n==1){

//         return 1;
//     }
//     for(int i = 2; i*i<=n;i++){

//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }


void sieve(int n){

    if(n<=1){
        return ;
    }
    bool isprime[n+1];
    fill(isprime,isprime+1+n,true);
    for(int i = 2; i*i<=n;i++){

        if(isprime[i]){
             for(int j =2*i;j<=n;j=j+i ){
                  isprime[j] = false;}
        }
    }

    for(int i = 2; i<=n;i++){

        if(isprime[i])
            cout<<i<<" ";


    }
}


int main(){

    int i = 34;
    sieve(i);


    return 0;
}
