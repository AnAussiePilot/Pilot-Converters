#include <iostream>
#include <string>

int main() {

    int Knots = 0;
    
    std::cout << "What is your speed in Knots?\n";
    std::cin >> Knots;
    std::cout << "This speed of " << Knots << " Knots is " << Knots * 1.852 << " Kilometres Per Hour\n";
}