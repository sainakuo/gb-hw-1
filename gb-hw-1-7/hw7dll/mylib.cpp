#include <iostream> 

namespace mylib
{
	void initArray(float* array, int size) {
		float sign = 1;

		for (size_t i = 0; i < size; i++)
		{
			array[i] = sign * i;
			sign *= -1;
		}
	}

	void printArray(float* array, int size) {
		for (size_t i = 0; i < size; i++)
		{
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
	}

	void countPosNeg(float* array, int size) {
		int pos = 0, neg = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (array[i] >= 0)
			{
				pos++;
			}
			else
			{
				neg++;
			}
		}
		std::cout << "Positive count: " << pos << " Negative count: " << neg << std::endl;
	}

}