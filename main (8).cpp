#include <iomanip>
#include <fstream>
#include <time.h>
#include <iostream>
#include <fstream>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;
/*Create a program that rolls two dice.
It should roll these dice multiple times to 
find the probability of having the sum of the rolls add to 7.*/
int main() {
    srand(time(NULL));
    int count = 0, total = 100000;
    for (int i = 0; i < total; ++i) {
        if ((1 + rand()%6) + (1 + rand()%6) == 7) {
            ++count;
        }
    }
    cout << "the probability of 
    having the sum of the rolls add to 7 is " << count/(double)total << endl;
    return 0;
}