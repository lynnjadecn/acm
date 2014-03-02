#include <iostream>

using namespace std;

int cal(char row, char col);

int main(){
	int N;
	cin >> N;
	while(N --){
		char row, col;
		cin >> row >> col;
		cout << cal(row, col) << endl;
	}
	return 0;
}

int cal(char row, char col){
	int count = 0;
	if(row + 2 <= 'h' && col + 1 <= '8')
		count ++;
	if(row + 2 <= 'h' && col - 1 >= '1')
		count ++;
	if(row - 2 >= 'a' && col + 1 <= '8')
		count ++;
	if(row - 2 >= 'a' && col - 1 >= '1')
		count ++;
	if(row + 1 <= 'h' && col + 2 <= '8')
		count ++;
	if(row - 1 >= 'a' && col + 2 <= '8')
		count ++;
	if(row + 1 <= 'h' && col - 2 >= '1')
		count ++;
	if(row - 1 >= 'a' && col - 2 >= '1')
		count ++;
	return count;
}
