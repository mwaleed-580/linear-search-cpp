#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], T key, int size) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

template <typename T>
void printSearchResult(int index, T key){
    cout << "The key " << key << " is found at index: " << index << endl;
}

int main() {
    // Test with an integer array of size 5
    int intArray[5] = { 64, 25, 12, 22, 11 };
    int intKey = 12;
    int size = sizeof(intArray) / sizeof(intArray[0]);
    int intIndex = linearSearch(intArray, intKey, size);
    printSearchResult(intIndex, intKey);

    // Test with a float array of size 4
    float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
    float floatKey = 0.57;
    size = sizeof(floatArray) / sizeof(floatArray[0]);
    int floatIndex = linearSearch(floatArray, floatKey, size);
    printSearchResult(floatIndex, floatKey);

    // Test with a string array of size 4
    string stringArray[4] = { "apple", "orange", "banana", "grape" };
    string stringKey = "banana";
    size = sizeof(stringArray) / sizeof(stringArray[0]);
    int stringIndex = linearSearch(stringArray, stringKey, size);
    printSearchResult(stringIndex, stringKey);

    return 0;
}
