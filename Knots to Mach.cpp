#include <iostream>
#include <string>

int main() {

    int Knots = 0;

    std::cout << "What is your speed in Knots?\n";
    std::cin >> Knots;
    std::cout << "Your speed of " << Knots << " Knots is approx. " << Knots / 667 << " time(s) of the speed of sound\nTo the nearest whole number\n";

}