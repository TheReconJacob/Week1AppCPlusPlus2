// Week1AppCPlusPlus2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    srand(time(0));
    enum movementStates { stand, walk, run, crawl };
    
    int currentMovement;
    std::string currentMovementValue;
    int nextMovement = 0;
    std::string nextMovementValue;

    for (int i = 0; i < 10; i++) {
        currentMovement = (movementStates)(rand() % 4);

        switch (currentMovement) {
        case stand:
            nextMovement = (movementStates)((rand() > RAND_MAX / 2) ? (int)walk : (int)crawl);
            currentMovementValue = "standing";
            break;
        case walk:
            nextMovement = (movementStates)((rand() > RAND_MAX / 2) ? (int)stand : (int)run);
            currentMovementValue = "walking";
            break;
        case run:
            nextMovement = (movementStates)walk;
            currentMovementValue = "running";
            break;
        case crawl:  nextMovement = (movementStates)stand;
            currentMovementValue = "crawling";
            break;
        }

        switch (nextMovement) {
        case stand: nextMovementValue = "standing";
            break;
        case walk: nextMovementValue = "walking";
            break;
        case run: nextMovementValue = "running";
            break;
        case crawl: nextMovementValue = "crawling";
            break;
        }

        std::cout << "He went from " << currentMovementValue << " to " << nextMovementValue << "." << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
