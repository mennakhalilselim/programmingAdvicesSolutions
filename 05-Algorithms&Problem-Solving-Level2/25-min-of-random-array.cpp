#include <iostream>
using namespace std;

int readPositiveNumber(string message)
{
    int num;
    do
    {
        cout << message;
        cin >> num;
    } while (num < 0);
    return num;
}

int randomNumberInRange(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int array[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = randomNumberInRange(1, 100);
    }
}

int minOfArray(int array[100], int length)
{
    int min = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

void printArray(int array[100], int length)
{
    cout << "Array Elements: ";
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printMin(int min)
{
    cout << "Min Number: " << min << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int array[100];
    int length = readPositiveNumber("Enter array length from 1 to 100: ");
    fillArrayWithRandomNumbers(array, length);
    printArray(array, length);
    printMin(minOfArray(array, length));
    return 0;
}