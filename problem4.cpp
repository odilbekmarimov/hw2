#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3, n4;
    int modifications=0;
    cin>>n1>>n2>>n3>>n4;
    if (n1 == n2 || n1 == n3 || n1 == n4) modifications++;
    if (n2 == n3 || n2 == n4) modifications++;
    if (n3 == n4) modifications++;
    cout << modifications<< endl;
}

