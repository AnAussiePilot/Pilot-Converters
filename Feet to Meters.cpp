#include <iostream>
#include <string>

int main() {
    
    double Feet = 0;

    std::cout << "Feet to Meters\nPlease Input Height in Feet\n";
    std::cin >> Feet;
    std::cout << "This altitude of " << Feet << " is " << Feet / 3.28084 << " in metres\n";
    
}