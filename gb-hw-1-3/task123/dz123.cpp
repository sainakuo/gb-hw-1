#include <iostream>
using namespace std;

int main()
{

    //1
    int a = 1, b = 2, c = 3, d = 4;
    float res;
    res = a * (b + (static_cast<float>(c) / d)); 
    //C-Style
    //res = a * (b + ((float)c / d)); 
    cout << "task 1: " << res << endl;

    //2
    int e = 26;
    int res2;
    res2 = (e <= 21) ? (21 - e) : 2 * (e - 21);
    cout << "task 2: " << res2 << endl;

    //3
    int mass[27];
    int* ptr;
    int temp = 0;

    //инициализация массива
    for (int z = 0; z < 3; z++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                mass[9 * z + 3 * y + x] = temp;
                temp++;
            }
        }
    }

    ptr = mass;
    //x = 1, y = 1, z = 1:
    cout << "task 3: " << *(ptr + 9 * 1 + 3 * 1 + 1) << endl;

    return 0;

}

