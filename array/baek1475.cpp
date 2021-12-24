#include <iostream>
using namespace std;

int arr[10];
int main(){
	int N, set = 1;
	cin >> N;
		
	while(N){
		arr[N % 10]++;
		N /= 10;
	}
	
	for(int i = 0 ; i < 10; i++){
		if(i == 6 || i == 9) 
			continue;
		set = max(set, arr[i]);
	}
	
	set = max(set, (arr[6] + arr[9] + 1) / 2);
	cout << set;
	
	return 0;
}
