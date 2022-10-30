#include <iostream>
#include<math.h>
#include <cmath>
using namespace std;

// int fib(int n){

//     if(n<=1){
//         return n;

//     }
//     else{

//         return fib(n-1)+fib(n-2);
//     }
// }

// int count(int n)
// {

//     int res = 0;
//     while (n > 0)
//     {
//         n = n / 10;
//         res = res + 1;
//     }
//     return res;
// }
// int palindrome(int n){

//     int res = 0;
//     int temp = n;
//     while(temp!=0){
//         int led = temp %10;
//         res = res *10+led;
//         temp = temp /10;

//     }
//     return (n==res);
// }

// int fact(int n){

//     // int res = 1;
//     // for(int i =2;i<=n;i++){

//     //     res = res *i;
//     // }
//     // return res;

//     if(n<=1){
//         return 1;

//     }
//     else{
//         return n *fact(n-1);
//     }
// }

// int trail(int n){
//     int res = 1;
//     for(int i =2;i<=n;i++){

//         res = res *i;
//     }
//     // return res;
//     int count= 0;
//     while(res%10==0){
//       count = count +1;
//       res = res/10;

//     }

//     return count;

// }

// int fact(int n){

//       int fact = 1;
//     for (int i = 2; i < n; i++)
//     {

//         fact = fact * i;
//     }
//     return fact;
// }

// int trail(int n)
// {

//     int s = fact(n);
//     int res = 0;
//     for (int i = 5; i <=s; i * 5)
//     {
//         res = res + s / i;
//     }
//     return res;
// }

// int gcd(int a ,int b){

//     if(b==0){
//         return a;
//     }
//     else
//         return gcd(b,a%b);
// }
// int lcm(int a,int b){

//     return a*b/(gcd(a,b));
// }

// int prime(int n){
// int i;
//     for( i = 1; i*i<n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }

//     }
//     for( ; i >=1;i--){
//         if(n%i==0){
//             cout<<n/i<<" ";
//         }
//     }
// }

// void sieve(int n)
// {

//     if (n <= 1)
//     {
//         return;
//     }
//     bool isPrime[n + 1];
//     fill(isPrime, isPrime + n + 1, true);
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (isPrime[i])
//         {

//             for (int j = 2 * i; j <= n; j = j + i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for(int k = 2 ;k<=n;k++){
//         if(isPrime[k])
//                cout<<k<<" ";
//     }
// }

//   bool pow(int n){

//     if(n==0){
//         return false;
//     }
//     return (n!=0&&(n&(n-1))==0);

     
// //   }                               


// int fun1(int arr[],int n){
//     // int n = sizeof(arr);
//     int res = 0;
//     for(int i = 0;i <n;i++){
//         res = res ^ arr[i];
//     }
//     return res;
// }


// int fun1(int n,int arr[]){

// for(int i =0;i<n;i++){
//     int count = 0 ;
//     for(int j = 0 ; j<n;j++){
//         if(arr[j]==arr[i]){
//             count++;
//         }
//     }
    
//     if(count%2!=0){
//         return arr[i];
//     }
// }

// }

// int fun2(int arr[],int n){



// }
                          

// int fun3(int n,int arr[]){



//     int XOR = 0,res  = 0,res2 = 0;
//     for(int i = 0;i<n;i++){
//     XOR = XOR ^ arr[i];}
    
//     int sn = XOR & (~(XOR-1));
//     for(int i = 0;i<n;i++){

//         if((arr[i]&&sn)!=0)
//              return res = res^arr[i];
//         else
//              return res2 = res2^arr[i];     
//     }
//     cout<<res<<" "<<res2;

// }

void fun4(string k){
   int n = k.length(); 
   int power = pow(2,n);
   for(int counter = 0;counter<power;counter++){
    for(int j = 0 ;j<n;j++){
        if((counter&(1<<j))!=0){
            cout<<k[j];
        }

    }

    cout<<endl;

   }


}


int main()
{

    // cout<<fib(4);
    // cout << count(4);
    // cout << palindrome(69596);
    // cout << trail(5);

    // cout<<lcm(12,15);
    // prime(10);
    // cout<<pow(26);
    // int arrr[] = {8,2,2,3,3,6,6,5,5,9};
    // int n = sizeof(arrr);
    // cout<<fun1(10,arrr);
    string arr = "abc";
    fun4(arr);
    return 0;
}
