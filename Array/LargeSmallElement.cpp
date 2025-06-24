#include <iostream>
#include <string>
using namespace std;
int main()
{

    int arr[5];

    int Max = INT_MIN;
    int Min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }

        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    cout << "Largest Element:" << Max << endl;
    cout << "Smallest Element:" << Min << endl;

    return 0;
}