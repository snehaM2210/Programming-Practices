//Arrow member selection operator
/*Using header and cpp files to create a class which will be helpful in industry or 
work purposes - just a new thing to learn in coding*/
#include <iostream>
#include "Choco.h"
using namespace std;

int main() {
	Choco chocoObject;
	Choco *chocoPointer = &chocoObject;
	
	chocoObject.printCrap(); //object.function name
	chocoPointer->printCrap(); //pointer->function name ,both give same result
	return 0;
}
