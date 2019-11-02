#include <iostream>
using namespace std;

char lcDisplayCharsForEachNumber[10][7] = {
        {'-', '|', '|', ' ', '|', '|', '-'},
        {' ', '|', ' ', ' ', '|', ' ', ' '},
        {'-', '|', ' ', '-', ' ', '|', '-'},
        {'-', '|', ' ', '-', '|', ' ', '-'},
        {' ', '|', '|', '-', '|', ' ', ' '},
        {'-', ' ', '|', '-', '|', ' ', '-'},
        {'-', ' ', '|', '-', '|', '|', '-'},
        {'-', '|', ' ', ' ', '|', ' ', ' '},
        {'-', '|', '|', '-', '|', '|', '-'},
        {'-', '|', '|', '-', '|', ' ', '-'}
};

int sizeOfNumbers;
string numbers;

int main (int argc, const char * argv[]) {
    while(cin >> sizeOfNumbers >> numbers and sizeOfNumbers != 0) {
        unsigned int heightOfDisplay = 2 * sizeOfNumbers + 3;
        for (unsigned int i = 0; i < heightOfDisplay; i++) {
            for (unsigned long j = 0; j < numbers.size(); j ++) {
                int number = numbers[j] - '0';
                if (i % (sizeOfNumbers + 1) == 0) {
                    cout << " ";
                    for (int k = 0; k < sizeOfNumbers; k++)
                        cout << lcDisplayCharsForEachNumber[number][(i / (sizeOfNumbers + 1)) * 3];
                    cout << " ";
                }
                if (i > 0 and i < sizeOfNumbers + 1) {
                    cout << lcDisplayCharsForEachNumber[number][2];
                    for (int k = 0; k < sizeOfNumbers; k++) cout << " ";
                    cout << lcDisplayCharsForEachNumber[number][1];
                }
                if (i > sizeOfNumbers + 1 and i < 2 * sizeOfNumbers + 2) {
                    cout << lcDisplayCharsForEachNumber[number][5];
                    for (int k = 0; k < sizeOfNumbers; k++) cout << " ";
                    cout << lcDisplayCharsForEachNumber[number][4];
                }
                if (j != numbers.size() - 1) cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return EXIT_SUCCESS;
}