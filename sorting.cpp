#include <iostream> 
using namespace std;
void sortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in descending order: \n";

    for (int i = 0; i < n; ++i)

        cout << arr[i] << " ";

    cout << "\n";

}

// Driver code to test above functions.  
int main()
{


    int arr[7]; // Declaring an array of size n.

    cout << "Enter the elements of the array: \n";

    for (int i = 0; i < 7; i++) { // Taking input from user.

        cin >> arr[i];

    }
    sortDescending(arr, 7); // Calling function to sort the array.     

    return 0;
}