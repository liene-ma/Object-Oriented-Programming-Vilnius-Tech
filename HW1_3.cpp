// Write a program that uses a while to sum the even numbers from 50 to 100.

#include<iostream>
using namespace std;

int main () {

    cout << "Even numbers from 50 to 100: " << endl;
    int sum=0;
    int n=50;
    
    while (n<=100){
        if(n%2==0){
            cout << n << " ";
        }
        sum=sum+n;
        n++;
    }
    cout << "\n****************************************" << endl;
    cout << "The sum of even numbers: " << sum << endl;
    
  return 0;
}