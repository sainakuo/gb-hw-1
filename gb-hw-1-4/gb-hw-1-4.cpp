#include <iostream>
using namespace std;

void fun1() {

    int a, b;
    cout << "input a: " << endl;
    cin >> a;
    cout << "input b: " << endl;
    cin >> b;

    if ((a + b) >= 10 && (a + b) <= 20)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl ;
    }
}

void fun2() {

    const int a = 5;
    const int b = 5;

    if (((a == 10) && (b == 10)) || (a + b == 10))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

}

void fun3() {

    for (size_t i = 1; i < 51; i++)
    {
        if (i % 2 != 0)
            cout << i << " ";
    }

    cout << endl;
}

bool fun4() {

    unsigned int a;
    bool key = 0;
    unsigned int divider = 2;

    cout << "input a:" << endl;
    cin >> a;
    
    if (a == 1 || a == 2)
    {
        cout << "true" << endl;
        return true;
    }

    do
    {
        if (a % divider == 0)
        {
            key = 1; //можно сразу выходить из цикла
        }

        divider++;

    } while (key == 0 && a != divider);

    if (key == 0)
    {
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }
}

bool fun5() {

    unsigned int a;

    cout << "input a:" << endl;
    cin >> a;

    if (a % 4 == 0)
    {
        if (a % 100 == 0)
        {
            if (a % 400 == 0)
            {
                cout << "true" << endl;
                return true;
            }
            cout << "false" << endl;
            return false;
        }
        cout << "true" << endl;
        return true;
    }
    else
    {
        cout << "false" << endl;
        return false;
    }

}

int main()
{
    cout << "task 1: " << endl;
   fun1();
    cout << "task 2: " << endl;
   fun2();
    cout << "task 3: " << endl;
   fun3();
    cout << "task 4: " << endl;
   fun4();
    cout << "task 5: " << endl;
   fun5();

   return 0;
}

