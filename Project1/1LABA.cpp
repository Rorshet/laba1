#include <iostream>
#include "3zadanie.h"
#include "1zadanie.h"  
#include "2zadanie.h"
#include "4zadanie.h"

int main()
{
    int a;
    int b;

    std::cout << "vvedite nomer bloka (1-4) \n";
    std::cin >> b;
    std::cout << "vvedite nomer zadania (1-5) \n";
    std::cin >> a;
    if (std::cin.fail() or b > 4 or b < 1 or a>5 or a < 1) {
        std::cout << "nepravilbiy vvod" << std::endl;
        
    }
    else {
        switch (b) {
        case 1: {
            switch (a)
            {
            case 1: {
                double{ double_fraction() };
            }break;
            case 2: {
                int{ sumLastNums() };
            }break;
            case 3: {
                int{ charToNum() };
            }break;
            case 4: {
                bool{ isPositive() };
            }break;
            case 5: {
                bool{ is2Digits() };
            }break;
            }break;
        case 2: {
            switch (a) {
            case 1: {
                int{ abs() };
            }break;
            case 2: {
                double{ safeDiv() };
            }break;
            case 3: {
                bool{ is35() };
            }break;
            case 4: {
                string{ makeDecision() };
            }break;
            case 5: {
                int{ max3() };
            }break;
            }break;
        case 3: {
            switch (a) {
            case 1: {
                std::string result = listNums();
                std::cout << result << "\"" << std::endl;
                return 0;
            }break;
            case 2: {
                std::string result = reverseListNums();
                std::cout << result << std::endl;
            }break;
            case 3: {
                std::string result = chet();
                std::cout << result << std::endl;
            }break;
            case 4: {
                int{ pow() };
            }break;
            case 5: {
                int{ numLen() };
            }break;
            }break;
        case 4: {
            switch (a) {
            case 1: {
                int{ findFirst()};
            }break;
            case 2: {
                int{ findLast() };
            }break;
            case 3: {
                int{ maxAbs() };
            }break;
            }
        }
        }
        }


        }


        }
    }
}   