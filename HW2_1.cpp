/* Write a program that uses the vector and checks whether the vector contains a palindrome,
i.e. whether the vector does or does not read the same forward as backward (e.g.,
a vector containing 1, 2, 3, 2, 1 is a palindrome, but a vector containing 1, 2, 3, 4 is not).*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    /*  int input;
        int rem;
        int temp;
        int reverse = 0;

        cout << "Enter your number: ";
        cin >> input;
        temp = input;

        while(temp>0){
            rem = temp%10;
            reverse = (reverse*10)+rem;
            temp = temp/10;
        }

        cout << "\n--------------------------------------\n" << endl;

        if(reverse==input)
            cout << "\n" << input << " is a Palindrome Number";
        else
            cout << "\n" << input << " is not a Palindrome Number";
        cout << endl; */


    int numbers;
    vector<int> test;

    //enter numbers  
    cout << "Enter numbers: " << endl;
    while (cin >> numbers) {
        test.push_back(numbers);
    }

    //print vector
    cout << "\n-----------------------------------------------\n";
    cout << "Your number ";
    for (int i = 0; i < test.size(); i++)
        cout << test[i] << " ";

    //reverse 
    vector<int> rev(test.rbegin(), test.rend());

    //compare
    if (test == rev)
    {
        cout << " is a palindrome." << endl;
    }
    else
    {
        cout << " is not a palindrome." << endl;
    }

    return 0;
}