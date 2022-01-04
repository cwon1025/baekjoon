#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int order;
	cin >> str >> order;
	list<char> L;
	list<char>::iterator iter;
	for(int i = 0; i < str.length(); i++)
		L.push_back(str[i]);

	iter = L.end();
	while(order--){
		char op;
		cin >> op;
		if(op == 'P'){
			char add;
			cin >> add;
			L.insert(iter, add);
		}
		else if(op == 'L')
			if(iter != L.begin()) iter--;
		else if(op == 'D')
			if(iter != L.end()) iter++;
		else{
			if(iter != L.begin()){
				iter--;
				iter = L.erase(iter);
			}
		}
	}
	for(iter = L.begin(); iter != L.end(); iter++)
		cout << *iter;

	return 0;
}
