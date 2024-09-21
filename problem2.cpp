//
// Created by Odilbek Marimov on 21/09/24.
//
#include <iostream>
using namespace std;
int main() {
    int winter, rain;;
    cin >> winter>>rain;
    switch (winter) {
        case 1: cout << "Bus";break;
        case 0: switch(rain) {
            case 1: cout << "Walk";break;
            case 0: cout << "Bike";break;
        }
    }
}