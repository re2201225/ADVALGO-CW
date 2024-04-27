//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void removeDuplicates(char arr[], int& n) {
//    if (n == 0 || n == 1)
//        return;
//
//    sort(arr, arr + n);
//
//    int j = 0;
//    for (int i = 0; i < n - 1; i++) {
//        if (arr[i] != arr[i + 1]) {
//            arr[j++] = arr[i];
//        }
//    }
//    arr[j++] = arr[n - 1];
//    n = j;
//}
//
//int main() {
//    char arr[] = { 'a', 'b', 'a', 'c', 'b', 'd', 'a' };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    removeDuplicates(arr, n);
//
//    cout << "Array after removing duplicates: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}