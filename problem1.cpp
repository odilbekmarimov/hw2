//
// Created by Odilbek Marimov on 21/09/24.
//
#include <iostream>
using namespace std;
int main() {
    long int n;
    cin>>n;
    switch (n<-2147483647) {
        case true: cout<<"NO";break;
        case false: switch (n>2147483647) {
            case true: cout<<"NO";break;
            case false: cout<<"YES";break;
        }
    }
}
