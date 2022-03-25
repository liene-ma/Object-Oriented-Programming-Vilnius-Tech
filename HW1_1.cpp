// clang++ -std=c++17 HW1_1.cpp -o prog
// ./prog
/* Read a set of integers into a vector. Print the sum of each pair of adjacent elements.
Change your program so that it prints the sum of the first and last elements,
followed by the sum of the second and second-to-last, and so on. */

#include<iostream>
#include<vector>
using namespace std;

int input = 0;
int range = 0;
vector<int> vec;
vector<int> adj;

int main()
{
    // user input numbers
    cout << "Enter your 10 numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> input;
        vec.push_back(input);
    }
    cout << "--------------------" << endl;

    // print the numbers in a vector
    cout << "\nThe vector: " << endl;
    for (auto i : vec)
        cout << i << " ";
    cout << "\n--------------------" << endl;

    // print the sum of the adjacent numbers. How to stop at the last one?
    cout << "\nThe sum of adjacent numbers: " << endl;

    int c = 0, c1 = 0;
    while (range < vec.size() - 1) {
        c1 = c + 1;
        adj.push_back(vec[c] + vec[c1]);
        c++;
        ++range;
    }
    for (auto a : adj)
        cout << a << " ";
    cout << "\n--------------------" << endl;

    // print the sum of the first and last element, second and secod to last, etc
    cout << "\nThe sum of first and last, etc: " << endl;

    for (decltype(vec.size()) x = 0, y = vec.size() - 1; x < y; ++x, --y) {
        cout << vec[x] + vec[y] << " ";
    }

    return 0;
}
