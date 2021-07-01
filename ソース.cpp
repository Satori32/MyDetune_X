#include <iostream>
#include <cstdint>

template<class T, class U>
U Detune(const T& N, const U& Max, const U& Step) {
	U A = Max / Step;
	T B = N / A;

	return B*Step;
}

int main() {
	std::uint16_t N = 17;
	std::uint16_t Max = 256;
	std::uint16_t Step = 16;

	std::uint16_t A = Detune(N, Max, Step);

	std::cout << N << std::endl;
	std::cout << Max << std::endl;
	std::cout << Step<< std::endl;
	std::cout << A << std::endl;
	return 0;
}