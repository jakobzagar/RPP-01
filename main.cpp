#include <iostream>

// detached

int main() {
    double a, b;
    char operacija;

    std::cout << "Vnesi prvo število za izračun: ";
    std::cin >> a;

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
            std::cout << "Napaka: drugo stevilo pri deljenju ne sme biti 0.";
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
