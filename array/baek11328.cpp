#include <iostream>
#include <string>
using namespace std;

int main(){
	int N;
	string str, temp;
	cin >> N;
	while(N > 0){
		int arr[26] = {};
		cin >> str >> temp;
		for(int i = 0; i < str.length(); i++)
			arr[str[i] - 'a']++;
		for(int i = 0; i < temp.length(); i++)
			arr[temp[i] - 'a']--;		
		
		bool imPossible = true;
		for(int i = 0; i < 26; i++)
			if(arr[i] != 0)
				imPossible = false;
		
		if(imPossible)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
		N--;
	}
	
	return 0;
}
