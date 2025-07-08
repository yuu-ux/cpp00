#include <iostream>
#include <algorithm>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		std::string input = argv[i];
		transform(input.begin(), input.end(), input.begin(), ::toupper);
		std::cout << input;
	}
	std::cout << std::endl;
	return 0;
}
