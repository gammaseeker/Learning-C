#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
	int myFavNums[5];
	int badNums[5] = {4, 13, 14, 24, 34};
	cout << "Bad Number 1: " << badNums[0] << endl;
	char myName[5][5] = {{'J', 'o', 'e', 'y'}, {'C', 'a', 't', 's'}};
	cout << "2nd Letter in 2nd array " << myName[1][1] << endl;
	return 0;
}
