#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x);
int main() {
	cout<<isPalindrome(121);
}


bool isPalindrome(int x){
	int n = x;
	if (x < 0) { return false; }
	int res = 0;
	while (x != 0){
	 res = res * 10 + x % 10;
	 x /= 10;
	}
	if (res == n) { return true; }
	else {return false;}
}