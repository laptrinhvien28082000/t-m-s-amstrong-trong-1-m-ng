#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;

int a, b;

void input() {
	cout << "Moi ban nhap so a\n";
	cin >> a;
	cout << "Moi ban nhap so b\n";
	cin >> b;
}

int socs(int k) {
	int so = 0;
	while (k > 0) {
		k = k / 10;
		so++;
	}
	return so;
}


bool isAmstrong(int k) {
	int tmp = k;
	int soMu = socs(k);
	int tong = 0;
	while (k > 0) {
		int t = k % 10;
		int mut = pow(t, soMu);
		tong += mut;
		k /= 10;
	}
	if (tong == tmp) return true;
	return false;
}

void findAmstrong() {
	int so = 0;
	if (a < b) {
		for (int i = a; i <= b; i++) {
			if (isAmstrong(i)) {
				so++;
				cout << i << " ";
			}
		}
	}
	else {
		for (int i = b; i <= a; i++) {
			if (isAmstrong(i)) {
				so++;
				cout << i << " ";
			}
		}
	}
	if (so == 0)
		cout << "0";
	
}int main() {

	input();
	findAmstrong();
	return 0;
}



