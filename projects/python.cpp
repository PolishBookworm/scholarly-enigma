#include <Python.h>

int main(int argc, char const *argv[])
{
	Py_Initialize();
	Py_Finalize();
	return 0;
}