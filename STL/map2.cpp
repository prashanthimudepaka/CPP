#include<bits/stdc++.h>
using namespace std;
int main() {
    // Declare a map where key is int and value is a pair of string and double
    map<int, pair<string, double>> studentScores;

    // Inserting elements
    studentScores[1] = make_pair("John", 85.5);
    studentScores[2] = make_pair("Emma", 90.2);

    // Accessing elements
    for (auto student : studentScores) {
        cout << "ID: " << student.first 
                  << ", Name: " << student.second.first 
                  << ", Score: " << student.second.second << endl;
    }

    return 0;
}
