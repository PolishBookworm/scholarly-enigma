#include <iostream>

int indexClosestEnemy(Enemy data[]);

class Enemy {
	public:
		std::string name;
		char type;
		int x;
		int y;

		void increase() {
			switch (type) {
				case 'A':
					x += 10;
					break;
				case 'B':
					x += 20;
					break;
				case 'C':
					x += 30;
					break; 
			}
		}
};

int main(int argc, char const *argv[]) {
	int testCases;
	std::cin >> testCases;

	Enemy xd;
	xd.name = "void";
	xd.type = 'A';
	xd.x = 977;
	xd.y = 888;
	

	return 0;
}

int indexClosestEnemy(Enemy data[]) {
	int min = data[0].x;
	int result = 0;
	for (auto i = 1; i < sizeof(data) / sizeof(Enemy); ++ i) {
		if (data[i].x < min) {
			min = data[i].x;
			result = i;
		}
	}
	return result;
}
