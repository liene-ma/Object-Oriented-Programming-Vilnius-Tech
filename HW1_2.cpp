/* Read a sequence of words from cin and store the values a vector. 
After you’ve read all the words, process the vector and change each word to uppercase. 
Print the transformed elements, eight words to a line.
(Hint: use <cctype> library to convert symbols to uppercase) */

#include<iostream>
#include<vector>
#include<cctype>
#include<string>

using namespace std;

int main (){
// Read a sequence of words from cin and store the values a vector.
  cout << "Enter a sequence of words, enter . when finished: " << endl;
  
  vector <string> words;
  string a;

  for(string a; cin>>a && a!=".";)
      words.push_back(a);
  

  cout << "\n******************************\n" << endl;
  cout << "Your words: " << endl;
  
  for (string a : words){
      cout << a << " ";
    }

  cout << "\n******************************\n" << endl;
  cout << "Your words in uppercase: " << endl;

  for(string &a : words){
    for(char &c : a){
      c = toupper(c);
    }
  }

  for(int i = 0; i != words.size(); i++){
    if(i != 0 && i%8==0){
      cout << endl;
    }
    cout << words[i] << " ";
  }
  
  return 0;
}
