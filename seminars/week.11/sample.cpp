#include<iostream>
#include "../helpers/helpers.h"


struct My_array {
    int* arr;
    int size;
};

//!!!Memory leak!!!
// My_array array_init() {
//     My_array res;
//     std::cin >> res.size;
//     res.arr = new int[res.size];
//     res.arr[0] = -10;
//     return res;
// }

int* array_init(int& size) {
    std::cin >> size;
    int* arr_container = new int[size];
    arr_container[0] = -10;
    return arr_container;
}

// Bad, very bad
void array_init(int* arr, int& size) {
    std::cin >> size;
    arr = new int[size];
    arr[0] = -10;
}

std::pair<int*, int*> array_init() {
    int size;
    std::cin >> size;
    int* start = new int[size];
    int* end = start + size;
    std::pair<int*, int*> p(start, end);
    return p;
}
void f(int** arr, int size) {
    for(int i=0; i < size; i++) {
        delete [] arr[i];
    }
    delete [] arr;
}
int main() {
    // int size;
    // int* arr;
    // My_array t;
    // // 1
    // t = array_init();
    // // 2
    // arr = array_init(size);
    // // 3 - memory leak
    // array_init(arr, size);
    // std::cout << t.size;
    // std::cout << t.arr[0];
    // std::pair<int*, int*> tt = array_init();
    int** arr = new int*[5];
    for(int i =0;i <5;i++){
        arr[i] = new int[5];
    }
    f(arr, 5);
    // element_log(2);
}