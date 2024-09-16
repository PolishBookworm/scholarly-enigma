#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in ("in.txt");
	ofstream out ("out.txt");
	double x, y;
	while(!in.eof())
	{
		in >> x;
		y = x*2;
		out << y << endl;
	}
	in.close();
	out.close();
	// system("PAUSE"); <-- this is Windows specific
	return EXIT_SUCCESS;
}