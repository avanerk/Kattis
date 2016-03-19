#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

int main() {
	
	int amount;
	
	while(cin >> amount) {
		
		if (amount == -1)
			break;
		
		int sum = 0;
		int miles = 0;
		
		for (int i = 0; i < amount; i++) {
			
			int speed, timeElapsed;
			
			cin >> speed >> timeElapsed;
			
			miles += speed * abs((sum - timeElapsed));
			sum = timeElapsed;
		}
		
		cout << miles << " miles" << endl;
		
		
	}
	
}