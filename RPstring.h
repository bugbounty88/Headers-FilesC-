#include <iostream>
using namespace std;

string repeateStr(string str, int r){
	string result;
	for (int i = 0; i < r; i++){
		result += str;
	}
	return result;
}

int main(){
	cout << repeateStr("Hamza \n", 10000000) << endl;
	return 0;
}
