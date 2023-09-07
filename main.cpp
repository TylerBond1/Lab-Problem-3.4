//
//  main.cpp
//  P2-4
//
//  Created by Tyler Bond on 8/31/23.
//

#include <iostream>
using namespace std;
int main(void) {
   
    // Establish variables
    double length;
    double width;
    double area;
    double perimeter;
    double hypotenuse;
    
    // Prompt the user to enter a length and a width
    cout <<  "Enter length: ";
    cin >> length;
    cout << endl <<  "Enter width: ";
    cin >> width;
    cout << endl;
    
    // Calculate Area
    area = length * width;
    
    // Calculate Perimeter
    perimeter = (2 * length) + (2 * width);
    
    // Calculate Hypotenuse
    hypotenuse = sqrt((length * length) + (width * width));
    
    // Display results
    cout <<  "Area: " << area << endl;
    cout <<  "Perimeter: " << perimeter << endl;
    cout <<  "Diagonal: " << hypotenuse << endl;
    
    cin.ignore();
    cin.get();
    
    return 0;
}
