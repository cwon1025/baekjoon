#include <iostream>
using namespace std;

int boy[7], girl[7];
int main(){
	int N, K, gender, grade, room = 0;
	cin >> N >> K;
	for(int i = 0; i < N; i++){
		cin >> gender >> grade;
		if(gender == 0)
			girl[grade]++;
		else
			boy[grade]++;
	}
	
	for(int i = 0; i < 7; i++){
		if(boy[i] % K == 0)
			room += boy[i] / K;
		else
			room += boy[i] / K + 1;
		
		if(girl[i] % K == 0)
			room += girl[i] / K;
		else
			room += girl[i] / K + 1;
	}	
	cout << room;
	
	return 0;
}
