#include<iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int num[50];
    
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }
    
    // Calculate the sum of the elements
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += num[i]; // Add each element to sum
    }
    
    // Print the sum
    cout << "The sum of the elements is: " << sum << endl;
    
    return 0;
}