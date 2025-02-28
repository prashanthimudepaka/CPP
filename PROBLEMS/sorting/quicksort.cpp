#include <iostream>
using namespace std;

// Swap function
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function (Hoare’s Partition, using first element as pivot)
int partition(int arr[], int low, int high) {
    int pivot = arr[low];  // First element as pivot
    int i = low - 1, j = high + 1;

    while (true) {
        // Move i right while arr[i] < pivot
        do { i++; } while (arr[i] < pivot);

        // Move j left while arr[j] > pivot
        do { j--; } while (arr[j] > pivot);

        if (i >= j) return j;  // Return partition index when pointers cross

        swap(arr[i], arr[j]);  // Swap elements on the wrong side of pivot
    }
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi);    // Sort left part (including pivot)
        quickSort(arr, pi + 1, high); // Sort right part
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}



// 0 1 2 3 4 5
// 5 2 1 6 7 3
//       i   j

// 5 2 1 3 7 6    jth element with pivot
//       j i

// 3 2 1 5 7 6
//    ij
// when i<j inc/dec
// when i>=j swap jth with pivot 

// 1 2 3 5 6 7
//         i j



 


 


// 
