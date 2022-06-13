#include <iostream>

int main(int argc, char* argv[])
{
    if (argc == 1)
        printf("\nNo extra arguments");
    if (argc >= 2)
    {
      
        printf("\n----Following Are The Command Line Arguments Passed----");
        for (int counter = 1; counter < argc; counter++)
            std::cout << "\nHello, " << argv[counter] <<"!";

    }
    return 0;
}