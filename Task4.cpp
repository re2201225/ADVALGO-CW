//#include <iostream>
//using namespace std;
//
//// Function that rearranges elements of an array based on a threshold 'k'
//void rearrange(int A[], int start, int end, int k) {
//    // Base case: if the segment to rearrange is empty or has only one element, return
//    if (start >= end) return;
//
//    // Choosing the last element as the pivot for partitioning, though it is not used directly for comparisons with 'k'
//    int pivot = A[end];
//    // 'i' will track the last index where an element was placed that's less than or equal to 'k'
//    int i = start - 1;
//
//    // Iterate through the array from 'start' to 'end - 1'
//    for (int j = start; j <= end - 1; j++) {
//        // If the current element is less than or equal to 'k', it should be included in the left partition
//        if (A[j] <= k) {
//            i++;  // Move 'i' forward to expand the left partition
//            swap(A[i], A[j]);  // Swap the current element with the element at 'i'
//        }
//    }
//    // After all elements are processed, place the pivot in the correct position in the middle
//    swap(A[i + 1], A[end]);
//
//    // Recursively rearrange the two partitions
//    rearrange(A, start, i, k);  // Rearrange the left partition, which contains elements <= k
//    rearrange(A, i + 2, end, k);  // Rearrange the right partition, which starts after the pivot position
//}
//
//int main() {
//    // Define the array and determine its size
//    int A[] = { 3, 1, 12, 9, 4, 10, 54, 34, 12, 89 };
//    int n = sizeof(A) / sizeof(A[0]);  // Calculate number of elements in A
//    int k = 12;  // Define the threshold for partitioning
//
//    // Call the rearrange function to modify the array based on 'k'
//    rearrange(A, 0, n - 1, k);
//
//    // Output the result after rearrangement
//    cout << "Output: ";
//    for (int i = 0; i < n; i++) {
//        cout << A[i] << " ";  // Print each element followed by a space
//    }
//    cout << endl;  // Move to a new line after printing all elements
//
//    return 0;  // Return 0 to indicate successful completion of the program
//}
