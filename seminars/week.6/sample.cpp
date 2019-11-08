#include<iostream>

void log(int arr[][5][5], int size) {
    for(int i=0; i < size; i++) {
        for(int j = 0; j < size; j++){
            for(int k = 0; k < size; k++){
                std::cout << arr[i][j][k] << " ";
            }
        }
    }
}
// void swap(int* a, int* b) {
//     int swap = *a;
//     *a = *b;
//     *b = swap;
// }

void swap(int& a, int& b) {
    int swap = a;
    a = b;
    b = swap;
}

int& one(int* a) {
    return a;
}

int main(){
    int c = 3, d = 5;
    swap(c, d);
    // std::cout << c << " " << d << std::endl;
    int* new_one = one();
    std::cout << new_one;
    int arr[5][5][5] = { 
        {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        },
        {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        }, 
        {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        },
        {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        }, 
        {
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5},
            {1,2,3,4,5}
        },
    };
    // log(arr, 5);
    int a = 2;
    // std::cout << &a << std::endl;
    int b = 3;
    // std::cout << &b << std::endl;
    int* pointerToA = &a;
    int** pointerToPointerToA = &pointerToA;
    // std::cout << "PointerToA: " << std::endl;
    // std::cout << &pointerToA << std::endl;
    // std::cout << *pointerToA << std::endl;
    // std::cout <<"PointerToPointerToA: " << std::endl;
    // std::cout << &pointerToPointerToA << std::endl;
    // std::cout << *(*pointerToPointerToA) << std::endl;
    int test_one_dim[2] = { 1,2};
    // std::cout << test_one_dim[0];
    // test_one_dim[0] = 12;
    *(test_one_dim + 1) = 12;
    // std::cout << *(test_one_dim + 1) ;
    // a[i] <=> *(a + i)
    return 0;
}