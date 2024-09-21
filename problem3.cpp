//
// Created by Odilbek Marimov on 21/09/24.
//
#include <iostream>
using namespace std;
int main() {
    char gender;
    float height;
    int intheight;
    cin >> gender >> height;
    intheight=int(height*100);
    switch (gender) {
        case 'M': switch (intheight) {
            case 0 ... 169: cout << "Short";break;
            case 170 ... 184: cout << "Normal";break;
            case 185 ... 250: cout << "Tall";break;
            default: cout << "Unknown";
        }; break;
        case 'F': switch (intheight) {
            case 0 ... 159: cout << "Short";break;
            case 160 ... 174: cout << "Normal";break;
            case 175 ... 250: cout << "Tall";break;
            default: cout << "Unknown";
        }; break;
    }

}