#include <iostream>
#include <algorithm>

using namespace std;

// A utility function to swap two elements
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

class HeapSort {
public:
    void heapify(int arr[], int n, int i) {
        int largest = i;    // Initialize largest as root
        int left = 2 * i + 1;  // left = 2*i + 1
        int right = 2 * i + 2; // right = 2*i + 2

        // If left child is larger than root
        if (left < n && arr[left] > arr[largest])
            largest = left;

        // If right child is larger than largest so far
        if (right < n && arr[right] > arr[largest])
            largest = right;

        // If largest is not root
        if (largest != i) {
            swap(arr[i], arr[largest]);

            // Recursively heapify the affected sub-tree
            heapify(arr, n, largest);
        }
    }

    void heapSort(int arr[], int n) {
        // Build heap (rearrange array)
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);

        // One by one extract an element from heap
        for (int i = n - 1; i > 0; i--) {
            // Move current root to end
            swap(arr[0], arr[i]);

            // Call max heapify on the reduced heap
            heapify(arr, i, 0);
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    HeapSort heapSort;
    heapSort.heapSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
