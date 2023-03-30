#include <iostream>
#include <cmath>

int convert (char num);
char convert (int num);
int romanToArabic (std::string num);
std::string arabicToRoman (int num);

int main (int argc, char const *argv[])
{
	int num;
	std::cin >> num;
	std::cout << arabicToRoman(num) << '\n';
	return 0;
}

int convert (char num)
{
	switch (num)
	{
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default: return 0;
	}
}

char convert (int num)
{
	switch (num)
	{
		case 1: return 'I';
		case 5: return 'V';
		case 10: return 'X';
		case 50: return 'L';
		case 100: return 'C';
		case 500: return 'D';
		case 1000: return 'M';
		default: return '\e';
	}
}


int romanToArabic (std::string num)
{
	int result = 0;

	for (int i = 0; i < num.length(); ++ i)
	{
		int tmp = convert(num[i]);
		int tmpNext = convert(num[i+1]);
		if (tmp < tmpNext) result -= tmp;
		else result += tmp;
	}

	return result;
}

std::string arabicToRoman (int num)
{
	const int arabic[] = {1000,500,100,50,10,5,1};
	std::string result = "";

	for (int i = 0; i < 7; ++ i)
	{
		int tmp = num / arabic[i];
		if (tmp > 0)
		{
			if (tmp <= 3) result += std::string(tmp,convert(arabic[i]));
			else result = result + convert(arabic[i]) + convert(arabic[i-1]);
		}
		num %= arabic[i];
	}

	return result;
}