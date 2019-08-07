#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int f(int value) {
	std::cout << "f(" << value << ")" << std::endl;
}

class X {
	public:
		X() {
			number = counter++;
		}
		int i;
		int f(int i) {
			std::cout << "Number: " << number <<" X::f(" << i << ")" << std::endl;
			return i;
		}
	private:
		int number;
		static int counter;
};

int X::counter = 0;

int main(int argc, char** argv) {
	
	X x,y;
	
	int (*fp)(int) = f;
	fp(3);
	
	
	int *fp2 = &x.i;
	
	int (X::*fp3)(int) = x.f;
	int (X::*fp4)(int) = X::f;
	(x.*fp3)(3);
	(y.*fp4)(4);
	(y.*fp3)(99);
	return 0;
}
