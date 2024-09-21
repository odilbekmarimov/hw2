#include <iostream>
using namespace std;
int main () {
    float n1, n2;
    char oper;
    cin>>n1>>oper>>n2;
    switch (oper) {
        case '+':cout<<n1+n2;break;
        case '-':cout<<n1-n2;break;
        case '/':cout <<n1/n2;break;
        case '*':cout<<n1*n2;break;
        default: cout<<"not defined";break;
    }
}