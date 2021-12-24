#include <iostream>
using namespace std;

int arr[10];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int A, B, C, mul = 0;
	cin >> A >> B >> C;
	mul = A * B * C;
	
	while(mul){
		arr[mul % 10]++;
		mul /= 10;
	}
	
	for(int i = 0; i < 10; i++)
		cout << arr[i] << '\n';		
	
	return 0;
}
