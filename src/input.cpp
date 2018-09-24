#include <iostream>
#include <sstream>
#include <string>
#include "common.h"

//return erase grid number
int inputDifficulty()
{
    std::string cmd;
    while (1)
    {
        std::cout << "�����Ѷȣ�1�� 2��ͨ 3����" << std::endl;

        std::cin >> cmd;

        int difficulty = atoi(cmd.c_str());

        switch (difficulty)
        {
        case EASY:
            return 20;
        case NORMAL:
            return 35;
        case HARD:
            return 50;
        default:
            std::cout << "�������" << std::endl;
            continue;
        }
    }

    return 0;
}