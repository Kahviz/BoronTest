#include "BoronTest.h"

#include "include/expects.h"


int main() {
	std::cout << "Hello BoronTest!" << std::endl;

	EXPECTVALUE(10, 0);

	EXPECTNEAR(10, 0, 5);

	EXPECTFALSE(true);
	EXPECTTRUE(false);

	return 0;
}