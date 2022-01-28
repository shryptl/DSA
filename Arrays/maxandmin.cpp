//Find maximum and minimum in an array

#include <iostream>
using namespace std;
 
void findMinAndMax(int arr[], int n, int &min, int &max)
{
    max = arr[0], min = arr[0];
 
    for (int i = 1; i < n; i++)
    {
        // if the current element is greater than the maximum found so far
        if (arr[i] > max) {
            max = arr[i];
        }
 
        // if the current element is smaller than the minimum found so far
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
}
 
int main()
{
    int arr[] = { 5, 7, 2, 4, 9, 6 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int min, max;
 
    findMinAndMax(arr, n, min, max);
 
    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max;
 
    return 0;
}