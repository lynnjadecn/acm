#include "iostream"

using namespace std;

int main(int argc, char const *argv[]){
	char code[65537][4];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> code[i][0] >> code[i][1] >> code[i][2] >> code[i][3];
	}

	int result[5] = {0};

	for (int i = 0; i < n - 1; ++i){
		for (int j = i + 1; j < n; ++j){
			int diff = 0;
			for (int k = 0; k < 4; ++k){
				if (code[i][k] != code[j][k]){
					diff ++;
				}
			}
			result[diff] ++;
		}
	}

	for (int i = 1; i <= 4; ++i){
		cout << result[i] << ' ';
	}
	cout << endl;

	return 0;
}