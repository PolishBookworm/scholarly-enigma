#include <iostream>
#include <math.h>

std::string decToHex(int num);
int hexToDec(std::string num);

short hexDigits(char digit);
char hexDigits(short digit);

int main(int argc, char const *argv[]) {
	std::cout << hexToDec("10") << '\n';

	return 0;
}

std::string decToHex(int num) {
	char tmp[int(floor(log(num)/log(16)))];

	int i = 0;
	while(num > 0) {
		tmp[i] = hexDigits(short(num % 16));
		num /= 16;
		++ i;
	}

	std::string result = "";
	while(-- i >= 0) {
		result += tmp[i];
	}

	return result;

}

int hexToDec(std::string num) {
	int result = 0;
	int power16 = 1;

	for(int i = num.length()-1; i >= 0; -- i) {
		result += hexDigits(num[i]) * power16;
		power16 *= 16;
	}
	return result;
}

short hexDigits(char digit) {
	switch(digit) {
	case 'A':
		return 10;
	case 'B':
		return 11;
	case 'C':
		return 12;
	case 'D':
		return 13;
	case 'E':
		return 14;
	case 'F':
		return 15;
	default:
		std::string tmp = "";
		tmp += digit;
		return std::stoi(tmp);
	}
}

char hexDigits(short digit) {
	if (digit < 10) return std::to_string(digit)[0];
	return "ABCDEF"[digit - 10];
}