#include <iostream>
#include <string>

int main()
{
    // 1
    short int a = 5;
    int b = 120;
    long long c = 9565123684513;
    char d = 'w';
    bool e = false;
    float f = 2.78f;
    double g = 456.7906;

    // 2
    enum Symbols
    {
        EMPTY,
        CROSS,
        ZERO
    };


    // 3
    Symbols gameField[9] = { EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY,
                             EMPTY, EMPTY, EMPTY };

    
    // 4
    struct Gamer
    {
        std::string name;
        int scores; //очки
        bool move; //1 - ход игрока, 0 - нет
    };

    struct gameData
    {
        Gamer gamer1;
        Gamer gamer2;
        bool gameStatus; //1 - игра идет, 0 - игра завершилась
        Symbols gameBoard[9];
    };

    //5
    union MyData
    {
        int a;
        float b;
        char c;
    };

    struct MyVariant
    {
        MyData data;
        bool isInt = 0;
        bool isFloat = 0;
        bool isChar = 0;
    };

    MyVariant var;
    
    
    //записываем int
    var.data.a = 5;
    var.isInt = 1;
    var.isFloat = 0;
    var.isChar = 0;

    //записываем float
    var.data.b = 5.655f;
    var.isInt = 0;
    var.isFloat = 1;
    var.isChar = 0;

    //записываем char
    var.data.c = 'h';
    var.isInt = 0;
    var.isFloat = 0;
    var.isChar = 1;
   
    if (var.isInt)
    {
        std::cout << var.data.a << std::endl;
    }
    else if (var.isFloat)
    {
        std::cout << var.data.b << std::endl;
    }
    else if (var.isChar)
    {
        std::cout << var.data.c << std::endl;
    }
    else
    {
        std::cout << "Data is empty!" << std::endl;
    }

    return 0;
}

