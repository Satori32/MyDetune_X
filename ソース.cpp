#include <iostream>
#include <cstdint>

template<class T>
T Detune(const T& N, const T& Max, const T Step) {//separate region.
	T A = Max / Step;//make one region 
	T B = N / A;//make step number.

	return B*A;//(step number)*region.
}

template<class T>
T Step(const T& N, const T& Max, const T Step) {//what number to i standing.
	T A = Max / Step;
	T B = N / A;

	return B;
}

int main() {

	{
		std::uint16_t N = 17;
		std::uint16_t Max = 256;
		std::uint16_t Step = 16;

		std::uint16_t A = Detune(N, Max, Step);

		std::cout << N << std::endl;
		std::cout << Max << std::endl;
		std::cout << Step << std::endl;
		std::cout << A << std::endl;
	}
	std::cout << "*-----------------------------*" << std::endl;
	{
		std::uint16_t N = 19;
		std::uint16_t Max = 256;
		std::uint16_t St = 16;

		std::uint16_t A = Step(N, Max, St);

		std::cout << N << std::endl;
		std::cout << Max << std::endl;
		std::cout << St << std::endl;
		std::cout << A << std::endl;
	}


	return 0;
}