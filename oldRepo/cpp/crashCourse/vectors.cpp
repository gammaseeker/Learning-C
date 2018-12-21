#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> num(10);
    int lotto[5] = {1, 2, 3, 4, 5};
    num.insert(num.begin(), lotto, lotto + 3);
    num.insert(num.begin() + 5, 44);
    for(int i = 0; i < 10; i++){
        cout << num.at(i) << endl;
    }
    return 0;
}