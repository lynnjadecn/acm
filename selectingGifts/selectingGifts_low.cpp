#include <iostream>

using namespace std;

#define moder 1000000007

int main(int argc, char const *argv[]){
	int T;
	cin >> T;
	for (int ti = 1; ti <= T; ++ti){
		long long n;
		long long result = 0;
		cin >> n;
		for (int i = 1; i <= n; ++i){
			for (int j = 1; j <= n; ++j){
				for (int k = 1; k <= n; ++k){
					if(i == j && j == k){
						result += i * j * k;
						//cout << i * j * k << endl;
                        result %= moder;
					}else if(i != j && j != k && i != k){
						result += i * j * k;
						//cout << i * j * k << endl;
						result %= moder;
					}
				}
			}
		}
		cout << "Case " << ti << ": " << result << endl;
	}
	return 0;
}