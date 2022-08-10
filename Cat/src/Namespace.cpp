#include <iostream>
#include "Animals.h"
#include "Cat.h"
using namespace std;
using namespace cats;
using namespace mit;
int main() {
	cats::Cat cat;
	cat.speak();
	mit::Cat cat1;
	cat1.speak();
	return 0;
}
