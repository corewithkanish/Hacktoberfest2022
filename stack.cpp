#include<bits/stdc++.h>
using namespace std;


struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int a){
        cap = a;
        arr = new int [cap];
        top = -1;



    }
    void push(int x ){
        if(top==cap-1){
            cout<<"Stack is full"<<endl;
            return ;
        }
        top ++;
        arr[top]=x;
    }
    int pop(){

        if(top==-1){
            cout<<"Stcak has empty"<<endl;
            return 0 ;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){

        if(top==-1){
            cout<<"Stack has Empty"<<endl;
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top==-1;
    }
};


int main(){
    mystack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;
}
