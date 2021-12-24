#include <iostream>
#include <string>
using namespace std;

int main(){
	string word;
	int alph[26] = {};
	cin >> word;
	
	for(int i = 0; i < word.length(); i++){
		alph[word[i] - 97]++;
	}

	for(int i = 0; i < 26; i++){
		cout << alph[i] << ' ';
	}

	return 0;
}
