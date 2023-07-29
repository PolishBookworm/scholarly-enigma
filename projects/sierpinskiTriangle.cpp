#include <iostream>

void addOnes(int num_line);
void newLine(int num_line);
void printTriangle();
const int NUM_ROWS = 64;
const int NUM_COLUMNS = NUM_ROWS*2 - 1;
bool triangle[NUM_ROWS][NUM_COLUMNS] = {0};

int main(int argc, char const *argv[]) {
	for (int i = 0; i < NUM_ROWS; ++ i) addOnes(i);
	for (int i = 0; i < NUM_ROWS; ++ i) newLine(i);
	printTriangle();
	return 0;
}


void addOnes(int num_line) {
	triangle[num_line][NUM_ROWS - num_line - 1] = 1;
	triangle[num_line][NUM_ROWS + num_line - 1] = 1;
}

void newLine(int num_line) {
	for (int i = NUM_ROWS - num_line - 1; i < NUM_ROWS + num_line - 1; i += 2)
		if (triangle[num_line-1][i-1] ^ triangle[num_line-1][i+1])
			triangle[num_line][i] = 1;
}

void printTriangle() {
	for (int i = 0; i < NUM_ROWS; ++ i) {
		for (int j = 0; j < NUM_COLUMNS; ++ j)
			if (triangle[i][j]) std::cout << '#';
			else std::cout << ' ';
		std::cout << '\n';
	}
}