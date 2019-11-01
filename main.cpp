#include <iostream>
#include <vector>
using namespace std;

string number;
int sizeOfNumbers;

void upperPart() {
    for (auto n : number) {
        cout << ' ';
        for (int i = 0; i < sizeOfNumbers; ++i)
            cout << (n == '1' or n == '4' ? ' ' : '-');
        cout << ' ' << ' ';
    }
    cout << '\b';
    putchar('\n');
}

void upperMiddle() {
    for (int s = 0; s < sizeOfNumbers; ++s) {
        for (auto n : number) {
            cout << (n == '7' or n == '3' or n == '2' or n == '1' ? ' ' : '|');
            for (int i = 0; i < sizeOfNumbers; ++i) cout << ' ';
            cout << (n == '6' or n == '5' ? ' ' : '|') << ' ';
        }
        cout << '\b';
        cout << endl;
    }
}

void middle() {
    for (auto n : number) {
        cout << ' ';
        for (int i = 0; i < sizeOfNumbers; ++i) cout << (n == '7' or n == '1' or n == '0'? ' ' : '-');
        cout << ' ' << ' ';
    }
    cout << '\b';
    putchar('\n');
}

void lowerMiddle() {
    for (int s = 0; s < sizeOfNumbers; ++s) {
        for (auto n : number) {
            cout << (n == '8' or n == '6' or n == '2' or n == '0' ?  '|' : ' ');
            for (int i = 0; i < sizeOfNumbers; ++i) cout << ' ';
            cout << (n == '2' ? ' ' : '|') << ' ';
        }
        cout << '\b';
        cout << endl;
    }
}

void lowerPart() {
    for (auto n : number) {
        cout << ' ';
        for (int i = 0; i < sizeOfNumbers; ++i) cout << (n == '7' or n == '4' or n == '1' ? ' ' : '-');
        cout << ' ' << ' ';
    }
    cout << '\b';
    putchar('\n');
}

int main() {
    while (cin >> sizeOfNumbers >> number and sizeOfNumbers != 0) {
        upperPart();
        upperMiddle();
        middle();
        lowerMiddle();
        lowerPart();
        cout << endl;
    }
    return EXIT_SUCCESS;
}