#include <iostream>

// detached

int main() {
    double a, b;
    char operacija;

    std::cout << "Vnesi prvo število za izračun: ";

    std::cout << "Vnesi operacijo (+, -, *, /): ";
    std::cin >> operacija;

    std::cout << "Vnesi drugo število: ";
    std::cin >> b;

    if (operacija == '+')
    {
        std::cout << a + b;
    }
    else if (operacija == '-')
    {
        std::cout << a - b;
    }
    else if (operacija == '*')
    {
        std::cout << a * b;
    }
    else if (operacija == '/')
    {
        if (b == 0)
        {
            std::cout << "Deljenje z nic ni dovoljeno.";
        }
        else
        {
            std::cout << a / b;
        }
    }
    else
    {
        std::cout << "Napacna operacija. Dovoljene operacije: +, -, *, /.";
    }

    std::cout << "Hvala za uporabo kalkulatorja." << '\n';

    std::cout << '\n';
    return 0;
}
