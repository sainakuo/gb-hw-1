// hw7dll.cpp : Определяет экспортируемые функции для DLL.
//

#include "hw7dll.h"
#include <iostream>
#include "mylib.h"
#include <fstream>

#define checkDiap(x, y) (x >= 0 && x < y) ? true: false;
#define SIZE 10
#define SwapINT(a, b) int temp; temp = a; a = b; b = temp;

void task1()
{
    std::cout << "task 1:  " << std::endl;

    float* array = new float[10];

    mylib::initArray(array, 10);
    mylib::printArray(array, 10);
    mylib::countPosNeg(array, 10);

    delete[] array;

    std::cout << std::endl;
}

void task2()
{
    int x, y;
    std::cout << "task 2:  " << std::endl;
    std::cout << "Input x:  " << std::endl;
    std::cin >> x;
    std::cout << "Input y:  " << std::endl;
    std::cin >> y;
    std::cout << checkDiap(x, y);
    std::cout << std::endl;
}

void task3()
{
    int array[SIZE];
    std::cout << "task 3:  " << std::endl;
    std::cout << "Input " << SIZE << " int numbers for initialize: " << std::endl;

    for (size_t i = 0; i < SIZE; i++)
    {
        std::cin >> array[i];
    }

    //сортировка пузырьком в порядке возрастания
    int swap;

    for (size_t i = 0; i < SIZE - 1; i++)
    {
        swap = 0;
        for (size_t j = 0; j < SIZE - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                SwapINT(array[j], array[j + 1]);
                swap = 1;
            }

        }
        if (swap == 0)
            break;
    }

    //печать массива
    for (size_t i = 0; i < SIZE - 1; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void task4()
{
    std::cout << "task 4:  " << std::endl;

#pragma pack (push, 1)
    struct Employee {
        char name[10]; //10
        int age; // 4
        char department[10]; //10
        char position[10]; //10
        int salary; //4
    };
#pragma pack(pop)

    Employee* empl = new Employee;
    *empl = { "Richard", 25, "Develop", "ios dev", 500000 };

    std::cout << "name: " << empl->name << std::endl
        << "age: " << empl->age << std::endl
        << "department: " << empl->department << std::endl
        << "position: " << empl->position << std::endl
        << "salary: " << empl->salary << std::endl
        << "sizeof: " << sizeof(*empl) << std::endl;

    std::ofstream fout("out.txt", std::ios_base::binary);

    fout.write((char*)empl, sizeof(*empl));
    fout.close();
    delete empl;
}

//task5 realizied in mylib.h and mylib.cpp

