#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s1, s2;
	int len, cnt = 0, arr[26] = {};
	
	cin >> s1 >> s2;
	for(int i = 0; i < s1.length(); i++)
		arr[s1[i] - 'a']++;
	for(int i = 0; i < s2.length(); i++)
		arr[s2[i] - 'a']--;
		
	for(int i = 0; i < 26; i++){
		if(arr[i] > 0){
			for(int j = arr[i]; j > 0; j--){
				arr[i]--;
				cnt++;
			}
		}
		else if(arr[i] < 0){
			for(int j = arr[i]; j < 0; j++){
				arr[i]++;
				cnt++;
			}
		}
	}
	cout << cnt;
	
	return 0;
}
