#include <iostream>
using namespace std;

// Hàm tìm kiếm nhị phân đệ quy
int binarySearch(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        // Nếu phần tử ở giữa mảng là phần tử cần tìm, trả về chỉ số của nó
        if (arr[mid] == target) {
            return mid;
        }

        // Nếu phần tử ở giữa lớn hơn phần tử cần tìm, tìm kiếm nửa đầu mảng trái
        if (arr[mid] > target) {
            return binarySearch(arr, low, mid - 1, target);
        }

        // Nếu phần tử ở giữa nhỏ hơn phần tử cần tìm, tìm kiếm nửa đầu mảng phải
        return binarySearch(arr, mid + 1, high, target);
    }

    // Nếu không tìm thấy phần tử, trả về -1
    return -1;
}

int main() {
    int arr[] = {2, 5, 9, 12, 17, 21, 28, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 17;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result == -1) {
        cout << "Phan tu khong co trong mang";
    } else {
        cout << "Phan tu co trong mang tai vi tri " << result;
    }

    return 0;
}
