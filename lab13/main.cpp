#include <iostream>
using namespace std;

int main() {
    
    int n;
    double sum = 0.0;
    double average = 0.0;

    // Ask how many temperatures the user will input
    cout << "How many temperatures would you like to enter? ";
    cin >> n;

    double arr[n];  // Array to store the temperatures

    // Input temperatures using a for loop
    cout << "Please enter the temperatures: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];  // Store each temperature in the array
        sum += arr[i];  // Add each temperature to sum
    }

    // Prints the temperatures entered
    cout << "The temperatures that you typed are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";  // Prints each temperature in the array
    }
    cout << endl;

    // Calculate and display the average
        average = sum / n;
        cout << "The average of the temperatures is: " << average << endl;

    return 0;
}
