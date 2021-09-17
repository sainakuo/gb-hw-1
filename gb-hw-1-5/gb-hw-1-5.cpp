#include <iostream>

using namespace std;

void fun1(double* array, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

void fun2(unsigned int* array, int size)
{
    cout << "before change: ";
    for (size_t i = 0; i < size; i++)
    {       
        cout << array[i] << " ";
        array[i] = !array[i];
    }

    cout << endl;
    cout << "after change: ";

    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

void fun3(int* array, int size)
{
    int temp = 1;
    for (size_t i = 0; i < size; i++)
    {
        array[i] = temp;
        temp += 3;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

void fun4(int* array, int size, int n)
{
    int temp; 
    int j = 0;
    int* tempArray = new int[size];

    if (abs(n) > size)
    {
           n = n % size;
    }

    if (n > 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (i < n)
                temp = array[size - n + i];
            else
                temp = array[i-n];
          
            tempArray[i] = temp;           
        }  
    }

    else
    {
        n = abs(n);
        for (size_t i = 0; i < size; i++)
        {
            if (i < size - n)
                temp = array[i + n];
            else
            {
                temp = array[j];
                j ++;
            }

            tempArray[i] = temp;
        }

    }

    for (size_t i = 0; i < size; i++)
    {
        cout << tempArray[i] << " ";
    }
    cout << endl;

}

bool fun5(int* array, int size) {
    int i, j;
    int sum1 = 0, sum2 = 0;
    int key = 0;

    i = 0;
    j = size - 1;
    sum1 += array[i];
    sum2 += array[j];

    while (key != (size - 2))
    {
        if (sum1 <= sum2)
        {
            i++;
            sum1 += array[i];
        }
        else 
        {
            j--;
            sum2 += array[j];
        }

        key++;
    }

    if (sum1 == sum2)
        return true;
    else
        return false;
}


int main()
{
    double array1[] = { 1.2, 4.56, 12.47, 15.8, 1.3 };
    unsigned int array2[] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    int array3[8];
    int array4[] = {1, 2, 3, 4, 5};
    int array5[] = {1, 1, 1, 1, 4};

    //task 1
    cout << "task 1: " << endl;
    fun1(array1, 5);

    //task2
    cout << "task 2: " << endl;
    fun2(array2, 5);

    //task3
    cout << "task 3: " << endl;
    fun3(array3, 8);

    //task4
    cout << "task 4: " << endl;
    fun4(array4, 5, 1);
    
    //task5
    cout << "task 5: " << endl;
    cout << fun5(array5, 5) << endl;
}

