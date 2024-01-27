#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

class MaxHeap {
public:
  int *heapArray;
  int capacity;
  int heapSize;

  MaxHeap(int cap) {
    heapSize = 0;
    capacity = cap;
    heapArray = new int[cap];
  }

  int parent(int i) {
    return (i - 1) / 2;
  }

  int left(int i) {
    return (2 * i + 1);
  }

  int right(int i) {
    return (2 * i + 2);
  }

  int getMax() {
    return heapArray[0];
  }

  void insertKey(int k) {
    if (heapSize == capacity) {
      cout << "\nOverflow: Could not insert Key\n";
      return;
    }

    heapSize++;
    int i = heapSize - 1;
    heapArray[i] = k;

    while (i != 0 && heapArray[parent(i)] < heapArray[i]) {
      swap(heapArray[i], heapArray[parent(i)]);
      i = parent(i);
    }
  }

  void decreaseKey(int i, int new_val) {
    heapArray[i] = new_val;
    while (i != 0 && heapArray[parent(i)] < heapArray[i]) {
      //parent should have been greater but this fffing thing is greater na
      swap( heapArray[i], heapArray[parent(i)]);
      i = parent(i);
    }
  }

  void deleteKey(int i) {
    decreaseKey(i, INT_MAX);
    extractMax();
  }

  void linearSearch(int val) {
    for (int i = 0; i < heapSize; i++) {
      if (heapArray[i] == val) {
        cout << "Value Found!";
        return;
      }
    }
    cout << "Value NOT Found!";
  }

  int extractMax() {
    if (heapSize <= 0)
      return INT_MIN;
    if (heapSize == 1) {
      heapSize--;
      return heapArray[0];
    }

    int root = heapArray[0];
    heapArray[0] = heapArray[heapSize - 1];
    heapSize--;
    MaxHeapify(0);

    return root;
  }

  void MaxHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int largest = i;

    if (l < heapSize && heapArray[l] > heapArray[largest])
      largest = l;
    if (r < heapSize && heapArray[r] > heapArray[largest])
      largest = r;

    if (largest != i) {
      swap( heapArray[i], heapArray[largest]);
      MaxHeapify(largest);
    }
  }

  void printArray() {
    for (int i = 0; i < heapSize; i++)
      cout << heapArray[i] << " ";
    cout << endl;
  }

  int height() {
    return ceil(log2(heapSize + 1)) - 1;
  }
};

int main() {
  int s;
  cout << "Enter Size of Max Heap" << endl;
  cin >> s;
  MaxHeap obj(s);
  cout << "Max Heap Created" << endl;

  int option, val;

  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Key/Node" << endl;
    cout << "2. Search Key/Node" << endl;
    cout << "3. Delete Key/Node" << endl;
    cout << "4. Get Max" << endl;
    cout << "5. Extract Max" << endl;
    cout << "6. Height of Heap" << endl;
    cout << "7. Print/Traversal Heap values" << endl;
    cout << "8. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "INSERT Operation -" << endl;
      cout << "Enter VALUE to INSERT in HEAP: ";
      cin >> val;
      obj.insertKey(val);
      cout << endl;
      break;
    case 2:
      cout << "SEARCH Operation -" << endl;
      cout << "Enter VALUE to SEARCH in HEAP: ";
      cin >> val;
      obj.linearSearch(val);
      break;
    case 3:
      cout << "DELETE Operation -" << endl;
      cout << "Enter INDEX of Heap Array to DELETE: ";
      cin >> val;
      obj.deleteKey(val);
      break;
    case 4:
      cout << "GET Max value : " << obj.getMax();
      cout << endl;
      break;
    case 5:
      cout << "EXTRACT Max value : " << obj.extractMax();
      cout << endl;
      break;
    case 6:
      cout << "HEAP TREE HEIGHT : " << obj.height() << endl;
      break;

    case 7:
      cout << "PRINT Heap Array : " << endl;
      obj.printArray();

      cout << endl;
      break;

    case 8:
      system("cls");
      break;

    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}
