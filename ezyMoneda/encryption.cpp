#include "encryption.h"

char convertToAlpha(char c)
{
	if (c < 'A' || c>'Z') {
		c = c % Total_Upper+ ASCII_A;
	}
	return c;
}


std::string hash(std::string input)
{
	std::string r = "";
	int length = input.length();
	bool flag = false;
	int offset = length % 5;
	while(input.length() > 16)
	{
		for (int i = 0; i < input.length() - 1; i++)
		{
			input[i] *= (i+offset) ^ input[length - 1] % Total_Upper + ASCII_A;
			input.pop_back();
		}
	}
	for (int i = 0; i < HASH_LENGTH; i++)
	{
		flag = !flag;
		if (flag) {
			r += (input[i]*(input[i])*length) % Total_Upper + ASCII_A;
		}
	}
	return r;
}
