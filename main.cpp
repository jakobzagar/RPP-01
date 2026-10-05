#include <iostream>

int main() {
    double a, b;
    char operacija;

    std::cout << "Vnesi prvo stevilo za izracun: ";
    std::cin >> a;

    std::cout << "Vnesi operacijo (+, -, *, /): ";
    std::cin >> operacija;

    std::cout << "Vnesi drugo stevilo: ";
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
        std::cout << "Napacna operacija.";
    }

    std::cout << '\n';
    return 0;
}
