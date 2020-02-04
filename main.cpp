#include <iostream>
#include <string>

using namespace std;

int main() {

    string input;

    int countA, countB, countC, countD, total;


    cin >> input;


    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'A' || input[i] == 'a') {
            ++countA;
        } else if (input[i] == 'B' || input[i] == 'b') {
            ++countB;
        } else if (input[i] == 'C' || input[i] == 'c') {
            ++countC;
        } else if (input[i] == 'D' || input[i] == 'd') {
            ++countD;
        }
    }


    cout << "A: " << countA << endl;
    cout << "B: " << countB << endl;
    cout << "C: " << countC << endl;
    cout << "D: " << countD << endl;

    if (countA % 3 == 0) {
        total += 43.34 * countA;
    } else if (countA % 3 !=0) {
        total += ((43.34 * (countA - countA%3)) + (50 * (countA % 3)));
    }

    if (countB % 2 == 0) {
        total += 37 * countB/2;
    } else if (countB % 2 !=0) {
        total += (countB%2 * 30 + ((countB - countB%2)/2) * 37);
    }

    total += 20 * countC + 10 * countD;


    cout << "Total: " << total << endl;
}
