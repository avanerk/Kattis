#include <iostream>
#include <string>
#include <math.h>

using namespace std;

char pos[8][8];

int x, z;

bool isSafe() {
	int diag = x-z;
	int diagn = x+z;
	int row = x;
	int col = z;

	int co[4] = {0, 0, 0, 0};
	for (int x = 0; x < 8; x++) {
		for (int z = 0; z < 8; z++) {
			if (pos[x][z] == '*') {
				if (x-z == diag) co[0]++; // diagonal
				if (x+z == diagn) co[1]++; // diagonal
				if (x == row) co[2]++; // horizontal
				if (z == col) co[3]++;// verical
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		if (co[i] > 1) {
			return false;
		}
	}

	return true;
}

bool valid = true;

int main() {
	string result = "valid";
	for (int i = 0; i < 8; i++) {
		string line;
		cin >> line;
		for (int n = 0; n < 8; n++) {
			if(line[n] == '*') pos[i][n] = '*';
		}
	}	

	int queenmatches = 0;

	for (int i = 0; i < 8; i++) {
		for (int n = 0; n < 8; n++) {
			if (pos[i][n] == '*') {
				queenmatches++;
				x = i; z = n;
				valid = isSafe();

				if (!valid) break;		
			}
		}
		if (!valid) break;
	}
	valid = valid && queenmatches == 8;
	cout << (valid ? "valid" : "invalid") << endl;
	return 0;
}