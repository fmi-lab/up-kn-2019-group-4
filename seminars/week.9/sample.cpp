#include<iostream>

bool find(int elem, int* arr, int size) {
    int start = 0, end = size;
    while(start < end && arr[(start + end)/2] != elem){
        int mid = (start + end)/2;
        if(arr[mid] > elem) {
            end = mid;
        } else {
            start = mid + 1;
        }
    }
    return arr[(start+end)/2] == elem;
}
int main() {
    int arr[9] = {1,3,4,5,6,7,8,9,10};
    for(int i=0; i < 10; i++) {
        std::cout << std::boolalpha << find(i, arr, 9) << std::endl;
    }
    return 0;
}