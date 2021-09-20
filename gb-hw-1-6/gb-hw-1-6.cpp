#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int* initArray1(int* array, unsigned int size) {
	int temp = 1;

	for (size_t i = 0; i < size; i++)
	{
		array[i] = temp;
		temp *= 2;
	}
	return array;
}

void printArray1(int* array, unsigned int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void fun1() {
	int* array;
	unsigned int size;
	cout << "input size of array: " << endl;
	cin >> size;

	array = new int[size];
	array = initArray1(array, size);
	printArray1(array, size);
	delete[] array;
}

int** initArray2(int** array) {

	srand(time(NULL));

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			array[i][j] = rand() % 100;
		}
	}

	return array;
}

void printArray2(int** array) {

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void fun2() {
	int** array; 
	array = new int*[4];

	for (size_t i = 0; i < 4; i++)
	{
		array[i] = new int[4];
	}

	array = initArray2(array);
	printArray2(array);

	for (size_t i = 0; i < 4; i++)
	{
		delete[] array[i];
	}

	delete[] array;
}

void fun4(string file1, string file2) {

	string file3;
	string temp;
	cout << "input file3 name: " << endl;
	cin >> file3;
	file3 += ".txt";

	ifstream fin1(file1);
	ifstream fin2(file2);

	ofstream fout3(file3, ios_base::app);
	
	if (fin1.is_open() && fin2.is_open())
	{
		while (!fin1.eof())
		{
			getline(fin1, temp);
			fout3 << temp;
		}
		fout3 << endl;
		while (!fin2.eof())
		{
			getline(fin2, temp);
			fout3 << temp;
		}
	}
	fin1.close();
	fin2.close();
	fout3.close();
}

void fun34() {

	//task3
	string file1, file2;
	cout << "input file1 name: " << endl;
	cin >> file1;
	cout << "input file2 name: " << endl;
	cin >> file2;
	file1 += ".txt";
	file2 += ".txt";

	ofstream fout1(file1, ios_base::app);
	ofstream fout2(file2, ios_base::app);

	for (size_t i = 0; i < 100; i++)
	{
		fout1 << "1";
		fout2 << "2";
	}

	fout1.close();
	fout2.close();

	//task4
	fun4(file1, file2);
}

bool fun5() {
	string fileName;
	string word;
	string temp;
	
	cout << "input file name: " << endl;
	cin >> fileName;
	cout << "input the word: " << endl;
	cin >> word;
	
	ifstream fin(fileName);

	if (fin.is_open())
	{
		while (!fin.eof())
		{
			fin >> temp;
			if (temp.find(word) != string::npos)
			{
				cout << "yes, word is included!" << endl;
				return true;
			}
		}
	}
	else
	{
		cout << "file is not exist!" << endl;
		return false;
	}

	fin.close();
	cout << "no, word is not included!" << endl;
	return false;
}

int main()
{
	//task1
	cout << "task 1: " << endl;
	fun1();

	//task2
	cout << "task 2: " << endl;
	fun2();

	//task3 and task4
	cout << "task 3 and task 4: " << endl;
	fun34();

	//task5
	cout << "task 5: " << endl;
	fun5();

}


