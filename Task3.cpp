//#include <iostream>
//using namespace std;
//
//// Function that implements bubble sort and counts the number of comparisons
//int bubble_sort_count(int arr[], int n) {
//    int count = 0;  // Initialize count of comparisons
//    for (int i = 0; i < n - 1; i++) {  // Outer loop goes through all elements
//        for (int j = 0; j < n - i - 1; j++) {  // Inner loop for comparing array elements
//            count++;  // Increment comparison count
//            if (arr[j] > arr[j + 1]) {  // If current element is greater than the next
//                swap(arr[j], arr[j + 1]);  // Swap them
//            }
//        }
//    }
//    return count;  // Return the total number of comparisons made
//}
//
//// Function that implements selection sort and counts the number of comparisons
//int selection_sort_count(int arr[], int n) {
//    int count = 0;  // Initialize count of comparisons
//    for (int i = 0; i < n - 1; i++) {  // Loop over the array
//        int min_idx = i;  // Assume the current index is the minimum
//        for (int j = i + 1; j < n; j++) {  // Find the minimum element in the remaining part
//            count++;  // Increment comparison count
//            if (arr[j] < arr[min_idx]) {  // If the current element is less than the assumed minimum
//                min_idx = j;  // Update the minimum index
//            }
//        }
//        swap(arr[i], arr[min_idx]);  // Swap the found minimum element with the first element
//    }
//    return count;  // Return the total number of comparisons made
//}
//
//// Function that implements insertion sort and counts the number of comparisons
//int insertion_sort_count(int arr[], int n) {
//    int count = 0;  // Initialize count of comparisons
//    for (int i = 1; i < n; i++) {  // Start with the second element
//        int key = arr[i];  // Element to be inserted
//        int j = i - 1;  // Start comparing with the previous item
//
//        while (j >= 0 && arr[j] > key) {  // While the element is greater than the key
//            count++;  // Increment comparison count
//            arr[j + 1] = arr[j];  // Move elements one position ahead
//            j = j - 1;  // Move to the next element on the left
//        }
//        count++;  // Increment for the last comparison where j >= 0 fails
//        arr[j + 1] = key;  // Insert the key at the correct position
//    }
//    return count;  // Return the total number of comparisons made
//}
//
//// Recursive function to heapify a subtree with root at given index
//void heapify(int arr[], int n, int i, int& count) {
//    int smallest = i;  // Initialize smallest as root
//    int l = 2 * i + 1;  // Left = 2*i + 1
//    int r = 2 * i + 2;  // Right = 2*i + 2
//
//    if (l < n) {  // If left child exists
//        count++;  // Increment comparison count
//        if (arr[l] < arr[smallest])  // If left child is smaller than root
//            smallest = l;  // Update smallest
//    }
//
//    if (r < n) {  // If right child exists
//        count++;  // Increment comparison count
//        if (arr[r] < arr[smallest])  // If right child is smaller than smallest so far
//            smallest = r;  // Update smallest
//    }
//
//    if (smallest != i) {  // If smallest is not root
//        swap(arr[i], arr[smallest]);  // Swap root with smallest
//        heapify(arr, n, smallest, count);  // Recursively heapify the affected sub-tree
//    }
//}
//
//// Main function to do heap sort and count comparisons
//int heap_sort_count(int arr[], int n) {
//    int count = 0;  // Initialize count of comparisons
//    for (int i = n / 2 - 1; i >= 0; i--)  // Build heap (rearrange array)
//        heapify(arr, n, i, count);
//
//    for (int i = n - 1; i > 0; i--) {  // One by one extract elements
//        swap(arr[0], arr[i]);  // Move current root to end
//        heapify(arr, i, 0, count);  // Call max heapify on the reduced heap
//    }
//    return count;  // Return the total number of comparisons made
//}
