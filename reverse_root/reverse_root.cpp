#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	long long buf;
	long long hub[256000];
	int pos = 0;
	while(scanf("%lld", &hub[pos])){
		pos ++;
	}
	while(pos --){
		printf("%.4f\n",sqrt(hub[pos]));
	} //todo: examine the correctness of the sequence

	return 0;
}
