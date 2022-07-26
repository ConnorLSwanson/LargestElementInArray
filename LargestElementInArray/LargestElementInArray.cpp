// LargestElementInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Connor Swanson
// Activision Blizzard
// 7/21/22

#include <iostream>
#include <algorithm>

using namespace std;

int FindMaxValue(int arr[], int size);

int main()
{
    const int maxSize = 5;
    int array[maxSize];
    int maxIndex;

    // Ask user for 5 elements for an array
    cout << "Please enter 5 numbers for an array." << endl;

    // Get input and store in array
    for (int i = 0; i < maxSize; i++)
    {
        cin >> array[i];
    }

    // Locating index of largest element
    maxIndex = FindMaxValue(array, maxSize);

    // Display largest element from the end of the array
    cout << "The largest number in the array is: " << array[maxIndex] << endl;
}

int FindMaxValue(int arr[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[temp]) temp = i;
    }
    return temp;
}