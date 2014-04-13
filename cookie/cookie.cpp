#include <iostream>
#include <list>

using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        double c, f, x;
        const double r = 2;
        cin >> c >> f >> x;
        list<double> l;
        l.push_back(x/r);
        double result;
        for (int j = 0; ; ++j){
            result = 0;
            for (int k = 0; k < j; ++k){
                result += c / (r + k * f);
            }
            result += x / (r + (j + 1) * f);
            if(result < l.back()){
                l.push_back(result);
            }
            else
                break;
        }
        cout << result << endl;
    }
}
