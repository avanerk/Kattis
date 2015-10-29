#include <iostream>
#include <string>
#include <vector>
#include <math.h> 

std::string encrypt(std::string message);

int main() {

	std::string message;

	int num;

	std::cin >> num;

	for (int i = 0; i < num; i++) {

		std::cin >> message;

		std::cout << encrypt(message) << std::endl;
	}

}

std::string encrypt(std::string message){

	std::string table = "";

	int message_length = message.length();

	int table_size = pow(ceil(sqrt(message_length)), 2);

	std::string cipher_text = "";
	std::vector<char> cipher(table_size);

	int inc = ceil(sqrt(message_length) - 1);
	int inc_start = inc;

	for (int i = 0; i < table_size; i++) {
		if (i < message_length) {
			table += message[i];
		}
		else {
			table += "*";
		}
	}

	for (int n = 0; n < table_size; n++) {

		if (inc_start > table_size) {
			inc--;
			inc_start = inc;
		}

		cipher[n] = table[inc_start];

		inc_start += 1;
		inc_start += (ceil(sqrt(message_length)) - 1);

	}

	for (int z = (cipher.size() - 1); z >= 0; z--) {
		if (cipher[z] != '*') {
			cipher_text += cipher[z];
		}
	}

	return cipher_text;
}
