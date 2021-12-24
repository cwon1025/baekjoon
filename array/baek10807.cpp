#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, v, cnt = 0;
	cin >> N;
	int arr[N];
	for(int i = 0; i < N; i++){
		cin >> arr[i];
	}
	cin >> v;
	
	for(int i = 0; i < N; i++){
		if(arr[i] == v)
			cnt++;
	}
	cout << cnt;
	
	return 0;
}
