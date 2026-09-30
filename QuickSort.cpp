#include <iostream>
#include <fstream>
int partition(int* arr, int low, int high);
void quickSort(int arr[], int low, int high);
int main(){
    int num;
    std::cin >> num;
    int arr[num];
    for (int i {}; i < num; ++i){
        std::cin >> arr[i];
    }
    quickSort(arr, 0, num - 1);
    for (int i {}; i < num; ++i){
        std::cout << arr[i] << ' '; 
    }    
    std::cout << '\n';
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(int arr[], int low, int high) {
    if (low < high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}