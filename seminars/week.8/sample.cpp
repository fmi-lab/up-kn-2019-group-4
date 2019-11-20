#include<iostream>
using predicate = bool (*)(const int&, const int&);

void swap(int& a, int& b) {
    int swap = a;
    a = b;
    b = swap;
}

bool gt(const int& a, const int& b) {
    return a > b;
}

void sort(int* arr, int size, bool (*p)(const int&, const int&) ) {
    for(int i=0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if (p(arr[i], arr[j])) {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void log(int* arr, int size){
    for(int i=0; i<size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;
}

int main() {
    int arr[10]= {2, 1, 23, 45, 15, 23, 156, 21, 32, 15};
    predicate s = gt;
    sort(arr, 10, gt);
    log(arr,10);
    return 0;
}