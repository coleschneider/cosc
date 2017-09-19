#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {
    //read population data from a census file where each line has a signle integer 
    //representing population in a city for a signle integer
    //starting at 1960, 1970, 1980, etc.
    fstream fs("pop.txt");
    int pop;
    int year = 1960;
    while (fs >> pop) {
        cout << year << " | ";
        for (int i = 0; i < pop; i += 1000) {
            cout << "*";
        }
        cout << endl;
        year += 10;
    }
    fs.close();
    return 0;
}