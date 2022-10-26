#include<bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;
using namespace std;
      



int ev(string str){

    stack<int> stac;
    for(char c: str){
        if(c >= '0' && c <= '9'){
            stac.push(c - '0');
        }
        else{
            int num1 = stac.top();
            stac.pop();
            int  num2 = stac.top();
            stac.pop();
             if (c == '+') {
                stac.push(num2 + num1);
            }
            else if (c == '-') {
                stac.push(num2 - num1);
            }
            else if (c == '*') {
                stac.push(num2 * num1);
            }
            else if (c == '/') {
                stac.push(num2 / num1);

        }}
    }
    return stac.top();
}


int main()
{
    string str = "1992*+";
    cout<<ev(str);
    return 0;
}
