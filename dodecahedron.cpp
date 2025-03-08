// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: March 7, 2025
// The code calculates the surface area
// and the volume of a dodecahedron by using the edge length
// given by the user

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>  // Included for std::string

// Define color codes
#define RESET "\033[0m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define RED "\033[31m"

int main() {
    // Declares the repeat as a string to accept user input of yes and no
    std::string repeat;
    do {
        // Input from the user: edge length of the dodecahedron
        float edge_length;
        std::cout << CYAN "\nEnter the edge length of the dodecahedron (cm): "
        << RESET;
        std::cin >> edge_length;

        // Calculations for the volume and surface area of the dodecahedron
        float volume = ((15 + 7 * sqrt(5)) / 4) * pow(edge_length, 3);
        float surface_area = 3 * sqrt(25 + 10 * sqrt(5)) * pow(edge_length, 2);

        // Set the output format to show 2 decimal places
        std::cout << std::fixed << std::setprecision(2);

        // Output the results, in to 2 decimal places
        std::cout << MAGENTA << "The volume of the dodecahedron is: "
        << volume << " cm³" << std::endl;
        std::cout << "The surface area of the dodecahedron is: "
        << surface_area << " cm²" << RESET << std::endl;

        // Ask the user if they want to repeat calculations
        std::cout << CYAN << "\nDo you want to calculate again? (yes/no): "
         << RESET;
        std::cin >> repeat;  // Store user's response

        // Check the user's response if it is a yes or no
        if (repeat != "yes") {
            std::cout << RED << "Goodbye! Thanks for using the Calculator."
            << RESET << std::endl;
        }
    } while (repeat == "yes");  // Repeat if the user enters yes

    return 0;
}
