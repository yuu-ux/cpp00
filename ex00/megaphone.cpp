#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		std::string input = argv[i];
		for (size_t j = 0; j < input.length(); j++) {
			input[j] = std::toupper(input[j]);
		}
		std::cout << input;
	}
	std::cout << std::endl;
	return 0;
}
